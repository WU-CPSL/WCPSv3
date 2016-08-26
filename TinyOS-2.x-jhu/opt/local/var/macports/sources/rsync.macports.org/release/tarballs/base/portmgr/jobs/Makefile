# $Id: Makefile 65055 2010-03-20 14:28:09Z jmr@macports.org $

SCRIPTS=	PortIndex2MySQL

edit = sed \
	-e 's,@macports_tcl_dir@,$(macports_tcl_dir),g'


include ../../Mk/macports.autoconf.mk


all: ${SCRIPTS}

PortIndex2MySQL: PortIndex2MySQL.tcl
	${edit} $< > $@
	chmod 755 $@

clean:
	rm -f ${SCRIPTS}

distclean: clean
