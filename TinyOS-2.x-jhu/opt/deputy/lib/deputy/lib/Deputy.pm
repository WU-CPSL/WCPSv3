#
#
# Copyright (c) 2001-2002, 
#  George C. Necula    <necula@cs.berkeley.edu>
#  Scott McPeak        <smcpeak@cs.berkeley.edu>
#  Wes Weimer          <weimer@cs.berkeley.edu>
# All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
#
# 1. Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution.
#
# 3. The names of the contributors may not be used to endorse or promote
# products derived from this software without specific prior written
# permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
# IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
# TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
# PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
# OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
# EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
# PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
# PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
# LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#

# This package is used from an environment when CilConfig.pm has been loaded
package Deputy;
use strict;

use Cilly;

# NOTE: If perl chokes, complaining about 'our', or
# "Array found where operator expected", it's because
# you need perl version 5.6.0 or later.
our @ISA = qw(Cilly);

sub new {
    my ($proto, @args) = @_;
    my $class = ref($proto) || $proto;

    #set up deputy target stuff
    {
        my @args1 = ();
        foreach my $arg (@args) {
            if($arg =~ m|--gcc=(.+)$|) {
                $::cc = $1;
            } else {
                push @args1, $arg;
            }
        }
        @args = @args1;
    }
    my $self = Cilly->new(@args);

    # Select the directory containing Deputy's executables.  We look in
    # both places in order to accomodate the build and distribution
    # directory layouts.
    my $bin;
    my $lib;
    if (-x "$::deputyhome/obj/$::archos/deputy.asm.exe") {
        $bin = "$::deputyhome/obj/$::archos";
        $lib = "$::deputyhome/obj/$::archos";
    } elsif (-x "$::deputyhome/bin/deputy.asm.exe") {
        $bin = "$::deputyhome/bin";
        $lib = "$::deputyhome/lib";
    } else {
        die "Couldn't find directory containing Deputy executables.\n" .
            "Please ensure that Deputy is compiled and installed properly.\n";
    }

    # Select the most recent executable
    my $mtime_asm = int((stat("$bin/deputy.asm.exe"))[9]);
    my $mtime_byte = int((stat("$bin/deputy.byte.exe"))[9]);
    my $use_debug = 
            (-x "$bin/deputy.byte.exe") &&
            (grep(/--bytecode/, @args) ||
             grep(/--ocamldebug/, @args) ||
             ($mtime_asm < $mtime_byte));
    if ($use_debug) { 
        $ENV{"OCAMLRUNPARAM"} = "b" . $ENV{"OCAMLRUNPARAM"}; # Print back trace
    } 

    # New variables for Deputy
    $self->{COMPILER} = "$bin/deputy" . ($use_debug ? ".byte.exe" : ".asm.exe");
    $self->{LIBBASE} = $lib;

    # Override Cilly's default
    $self->{SEPARATE} = 1;

    bless $self, $class;
}

# Use the debug library if necessary
sub deputyLib {
    my ($self) = @_;
    return ("$self->{LIBBASE}/deputy_" .
            ($self->{LINUX} ? "linux" : "libc") . 
            ".$self->{OBJEXT}");
}

sub instrLib {
	my ($self) = @_;
	return ("$::deputyhome/lib/lwcalls.mlb",
			"$self->{LIBBASE}/instr_glob_state.$self->{OBJEXT}")
}

sub instrLink {
	my ($self) = @_;
	return ("-lm","-lcurses","-lpthread");
}

sub setDefaultArguments {
    my ($self) = @_;
    $self->{TRACE_COMMANDS} = 0;
    return $self->SUPER::setDefaultArguments;
}

sub collectOneArgument {
    my ($self, $arg, $pargs) = @_;
    my $res = 1;
    if ($self->compilerArgument($self->{OPTIONS}, $arg, $pargs)) {
        # do nothing
    } elsif ($arg eq "--param") {
        my $more = $self->fetchNextArg($pargs);
        push @{$self->{CCARGS}}, $arg;
        push @{$self->{CCARGS}}, $more;
    } elsif ($arg =~ m|-B(.+)$|) {
        push @{$self->{CCARGS}}, $arg;
    } elsif ($arg eq "--help" || $arg eq "-help") {
        $self->printVersion();
        $self->printHelp();
        exit 0;
    } elsif ($arg eq "--version" || $arg eq "-version") {
        $self->printVersion();
        exit 0;
    } elsif ($arg eq "--linux") {
        $self->{LINUX} = 1;
    } elsif ($arg eq "--trace") {
        $self->{TRACE_COMMANDS} = 1;
    } elsif ($arg eq "--nolib") {
        $self->{NOLIB} = 1;
    } elsif ($arg eq "--bytecode") {
        $self->{NATIVECAML} = 0;
    } elsif ($arg =~ m|--save-temps=(.+)$|) {
        if (! -d $1) {
            die "Cannot find directory $1";
        }
        $self->{SAVE_TEMPS} = $1;
    } elsif ($arg eq '--save-temps') {
        $self->{SAVE_TEMPS} = '.';
    } elsif ($arg =~ m|--includedir=(.+)$|)  {
        push @{$self->{INCLUDEDIR}}, $1;
    } elsif ($arg =~ m|^--out=(\S+)$|) {
        # Intercept the --out argument
        $self->{CILLY_OUT} = $1;
        #push @{$self->{CILARGS}}, "--out", $1;
    } elsif ($arg eq "--instrument") {
    	$self->{INSTRUMENT} = 1;
        push @{$self->{CILARGS}}, "--instrument";
    } elsif ($arg =~ m|^--|) {
        # All other arguments starting with -- are passed to CIL
        # Split the ==
        if ($arg =~ m|^(--\S+)=(.+)$|) {
            push @{$self->{CILARGS}}, $1, $2;
        } else {
            push @{$self->{CILARGS}}, $arg;
        }
    } else {
        # We fail!
        $res = 0;
    }
    return $res;
}

sub preprocess_before_cil {
    my($self, $src, $dest, $ppargs) = @_;
    my @args = @{$ppargs};
    unshift @args,
    $self->forceIncludeArg("$::deputyhome/include/deputy/annots.h");
    unshift @args, $self->{INCARG} . $::deputyhome . "/include";
    return $self->SUPER::preprocess_before_cil($src, $dest, \@args);
}


## We do not preprocess after CIL, to save time and files
sub preprocessAfterOutputFile {
    my ($self, $src) = @_;
    return $src; # Do not preprocess after CIL
}

sub preprocess_after_cil {
    my ($self, $src, $dest, $ppargs) = @_;
    if($src ne $dest) { die "I thought we are not preprocessing after CIL";}
    return $dest;
}

sub compile_cil {
    my ($self, $src, $dest, $ppargs, $ccargs) = @_;
    my @args = @{$ppargs};
    push @args, "$self->{INCARG}$::deputyhome/include";
    return $self->SUPER::compile_cil($src, $dest, \@args, $ccargs);
}


sub link_after_cil {
    my ($self, $psrcs, $dest, $ppargs, $ccargs, $ldargs) = @_;
    my @srcs = @{$psrcs};
    my @libs = @{$ldargs};
    my @cargs = @{$ccargs};
    my ($instrlibs, $instrcargs);
    if (scalar @srcs == 0) {
        print STDERR "deputy: no input files\n";
        return 0;
    } else {
        push @srcs, $self->deputyLib() unless $self->{NOLIB};
        #push @srcs, $self->instrLib() unless $self->{INSTRUMENT} != 1;
        #push @libs, $self->instrLink() unless $self->{INSTRUMENT} != 1;
        if ($self->{INSTRUMENT} == 1) {
        	$self->{LD} = ['mlton','-profile','alloc','-runtime','max-heap 1.5g','-runtime','gc-summary','-default-ann',"allowFFI true"];
        	$self->{OUTEXE} = '-output';
        	push @{$ccargs},("-I /usr/local/include","-I /usr/local/include/oct");
        	push @libs, ("-lgmp","-loct_iag");
        	unshift @srcs, $self->instrLib();
        	if (scalar @{$ppargs} != 0 || scalar @{$ccargs} != 0) {
        		$instrcargs = join(" ",@{$ppargs},@{$ccargs});
        		#$instrcargs = join(" ","-cc-opt","\"$instrcargs\"");
        		@cargs = ("-cc-opt",$instrcargs);
        	}
        	if (scalar @libs != 0) {
	        	$instrlibs = join(" ",@libs);
		       	#$instrlibs = join(" ","-link-opt","\"$instrlibs\"");
		       	push @cargs, ("-link-opt",$instrlibs);
		       	@libs = ();
        	}
        	$ppargs = [];
        }
        return $self->SUPER::link_after_cil(\@srcs, $dest, $ppargs,
                                            \@cargs, \@libs);
    }
}

sub linktolib {
    my ($self, $psrcs, $dest, $ppargs, $ccargs, $ldargs) = @_;
    my @srcs = @{$psrcs};
    if (scalar @srcs == 0) {
        print STDERR "deputy: no input files\n";
        return 0;
    } else {
        push @srcs, $self->deputyLib() unless $self->{NOLIB};
        return $self->SUPER::linktolib(\@srcs, $dest, $ppargs,
                                       $ccargs, $ldargs);
    }
}

sub CillyCommand {
    my ($self, $ppsrc, $dest) = @_;

    my @cmd = ($self->{COMPILER});
    my $aftercil = $self->cilOutputFile($dest, 'cil.c');
    if( defined $self->{CILLY_OUT}) {
        $aftercil->{filename} = $self->{CILLY_OUT};
    }
    return ($aftercil, @cmd, '--out', $aftercil);
}

sub printVersion {
    #system ($self->{COMPILER}, '--version'); 
}

sub printHelp {
    my ($self) = @_;
    my @cmd = ($self->{COMPILER}, '-help');
    $self->runShell(@cmd); 
    print <<EOF;

Front end:

  --linux               Use the Linux runtime library.
  --trace               Print commands invoked by the front end.
  --nolib               Don't link the runtime library.
  --bytecode            Use the bytecode version of Deputy.
  --save-temps          Save intermediate files (target directory optional).
  --includedir          Add the specified directory to the beginning of
                        the include path.
EOF
}

1;
