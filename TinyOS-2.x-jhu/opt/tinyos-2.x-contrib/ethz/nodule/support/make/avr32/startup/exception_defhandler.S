/* $Id: exception_defhandler.S,v 1.2 2008/01/20 16:38:27 yuecelm Exp $ */

/* author: Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

// untested

.global   handle_exception
.global   handle_scall
.weak     handle_exception
.weak     handle_scall
handle_exception:
handle_scall:
  retal   0
