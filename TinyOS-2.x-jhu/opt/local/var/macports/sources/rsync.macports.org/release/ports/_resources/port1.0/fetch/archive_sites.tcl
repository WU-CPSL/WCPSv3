# $Id: archive_sites.tcl 81538 2011-08-01 12:45:58Z jmr@macports.org $

namespace eval portfetch::mirror_sites { }

set portfetch::mirror_sites::sites(macports_archives) {
    http://packages.macports.org/:nosubdir
}

set portfetch::mirror_sites::archive_prefix(macports_archives) /opt/local
