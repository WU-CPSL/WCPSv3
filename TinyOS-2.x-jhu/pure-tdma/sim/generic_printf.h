#ifndef __GENERIC_PRINTF_H
#define __GENERIC_PRINTF_H

#define printf(...) dbg("printf", __VA_ARGS__)
int printfflush() { return 0; }

#endif
