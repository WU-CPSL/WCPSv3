/* $Id: interrupt.S,v 1.2 2008/02/17 16:29:19 yuecelm Exp $ */

/* author: Mustafa Yuecel <mustafa.yuecel@alumni.ethz.ch> */

.section  .interrupt,"ax"
.align    1
.global   _int
_int:
  rete
