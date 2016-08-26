#ifndef __CTYPE_H_
#define __CTYPE_H_


extern inline int isalpha(int c)		{ return ((c>='A'&&c<='Z')||(c>='a'&&c<='z')); }

extern inline int iscntrl(int c)		{ return ((c>=0&&c<=27)||c==127);}

extern inline int isdigit(int c)		{ return (((c)>='0')&&((c)<='9'));}

extern inline int isalnum(int c)		{ return (isalpha(c)||isdigit(c));}

extern inline int isspace(int c)		{ return ((c) == ' ' || ((c) >= '\t' && (c) <= '\r'));}

extern inline int isascii(int c)		{ return (((c) & ~0x7f) == 0);}

extern inline int isupper(int c)		{ return ((c) >= 'A' && (c) <= 'Z');}

extern inline int islower(int c)		{ return ((c) >= 'a' && (c) <= 'z');}

extern inline int isprint(int c)                { return (c >= ' ' && c < 127);}

extern inline int isblank(int c)                { return (c == '\t' || c == ' ');}

extern inline int isxdigit(int c)     
{
 return (isdigit(c)|| ((c) >= 'A' && (c) <= 'F') || ((c) >= 'a' && (c) <= 'f'));
}

extern inline int ispunct(int c)
{
 return (isprint (c) && !islower(c) && !isupper(c) && c != ' ' && !isdigit(c));
}


extern inline int toupper(int c)		{ return ((c) - 0x20 * (((c) >= 'a') && ((c) <= 'z')));}

extern inline int tolower(int c)		{ return ((c) + 0x20 * (((c) >= 'A') && ((c) <= 'Z'))) ;} 

extern inline int toascii(int c)		{ return (c&0x7f);}



#endif
