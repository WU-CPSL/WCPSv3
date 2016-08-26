/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf -p -j1 -i 1 -g -o -t -G -N is_reserved_word -k'1,3,8,$'  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


/* This file is part of the nesC compiler.
This file is derived from the RC and the GNU C Compiler. It is thus
   Copyright (C) 1987, 88, 89, 92-7, 1998 Free Software Foundation, Inc.
   Copyright (C) 2000-2001 The Regents of the University of California.
Changes for nesC are
   Copyright (C) 2002 Intel Corporation
The attached "nesC" software is provided to you under the terms and
conditions of the GNU General Public License Version 2 as published by the
Free Software Foundation.
nesC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with nesC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA. */
/* Command-line: gperf -p -j1 -i 1 -g -o -t -N is_reserved_word -k1,3,$ c-parse.gperf  */ 
struct resword { char *name; short token; enum rid rid; };

#define TOTAL_KEYWORDS 88
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 18
#define MIN_HASH_VALUE 10
#define MAX_HASH_VALUE 151
/* maximum key range = 142, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152,   1, 152,  34,  53,   5,
       34,   2,  19,  41,   2,  16, 152,  54,  50,  23,
        2,  31,  66, 152,  25,  14,   1,  61,  50,  22,
        6,   8,   2, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152, 152, 152, 152, 152,
      152, 152, 152, 152, 152, 152
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static struct resword wordlist[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
    {"event", SCSPEC, RID_EVENT | RID_NESC},
    {"extern", SCSPEC, RID_EXTERN},
    {""},
    {"const", TYPE_QUAL, const_qualifier},
    {"__const", TYPE_QUAL, const_qualifier},
    {"nx_union", NX_UNION, NORID},
    {""},
    {"__const__", TYPE_QUAL, const_qualifier},
    {"nx_struct", NX_STRUCT, NORID},
    {"continue", CONTINUE, NORID},
    {"__complex__", TYPESPEC, RID_COMPLEX},
    {"int", TYPESPEC, RID_INT},
    {"else", ELSE, NORID},
    {"__complex", TYPESPEC, RID_COMPLEX},
    {"extends", EXTENDS, RID_NESC},
    {"case", CASE, NORID},
    {""},
    {"__imag__", IMAGPART, NORID},
    {""},
    {"__inline", SCSPEC, RID_INLINE},
    {"__inline__", SCSPEC, RID_INLINE},
    {"__extension__", EXTENSION, NORID},
    {"__typeof__", TYPEOF, NORID},
    {"interface", INTERFACE, NORID},
    {"return", RETURN, NORID},
    {"norace", SCSPEC, RID_NORACE},
    {"__real__", REALPART, NORID},
    {"if", IF, NORID},
    {"switch", SWITCH, NORID},
    {""},
    {"component", COMPONENT, NORID},
    {"sizeof", SIZEOF, NORID},
    {""},
    {"__asm__", ASM_KEYWORD, NORID},
    {""},
    {"while", WHILE, NORID},
    {"struct", STRUCT, NORID},
    {"configuration", CONFIGURATION, NORID},
    {"__typeof", TYPEOF, NORID},
    {"new", NEW, RID_NESC},
    {"as", AS, RID_NESC},
    {"short", TYPESPEC, RID_SHORT},
    {"async", SCSPEC, RID_ASYNC | RID_NESC},
    {"__restrict", TYPE_QUAL, restrict_qualifier},
    {"components", COMPONENTS, RID_NESC},
    {"generic", GENERIC, NORID},
    {"float", TYPESPEC, RID_FLOAT},
    {"includes", INCLUDES, NORID},
    {"abstract", ABSTRACT, RID_NESC},
    {"static", SCSPEC, RID_STATIC},
    {"__signed__", TYPESPEC, RID_SIGNED},
    {"default", DEFAULT, NORID},
    {"__label__", LABEL, NORID},
    {"__asm", ASM_KEYWORD, NORID},
    {"__imag", IMAGPART, NORID},
    {"module", MODULE, NORID},
    {""},
    {"do", DO, NORID},
    {"char", TYPESPEC, RID_CHAR},
    {"command", SCSPEC, RID_COMMAND | RID_NESC},
    {"auto", SCSPEC, RID_AUTO},
    {""},
    {"for", FOR, NORID},
    {"task", SCSPEC, RID_TASK | RID_NESC},
    {"inline", SCSPEC, RID_INLINE},
    {""},
    {"atomic", ATOMIC, NORID},
    {"goto", GOTO, NORID},
    {"__alignof__", ALIGNOF, NORID},
    {"__volatile", TYPE_QUAL, volatile_qualifier},
    {"__volatile__", TYPE_QUAL, volatile_qualifier},
    {"uses", USES, RID_NESC},
    {"__real", REALPART, NORID},
    {"asm", ASM_KEYWORD, NORID},
    {"union", UNION, NORID},
    {"post", POST, RID_NESC},
    {""}, {""}, {""}, {""},
    {"enum", ENUM, NORID},
    {"__signed", TYPESPEC, RID_SIGNED},
    {"typeof", TYPEOF, NORID},
    {"typedef", SCSPEC, RID_TYPEDEF},
    {"__alignof", ALIGNOF, NORID},
    {"signed", TYPESPEC, RID_SIGNED},
    {"offsetof", OFFSETOF, NORID},
    {"long", TYPESPEC, RID_LONG},
    {""}, {""},
    {"implementation", IMPLEMENTATION, RID_NESC},
    {"__attribute", ATTRIBUTE, NORID},
    {"__attribute__", ATTRIBUTE, NORID},
    {"double", TYPESPEC, RID_DOUBLE},
    {"void", TYPESPEC, RID_VOID},
    {""}, {""},
    {"__builtin_offsetof", OFFSETOF, NORID},
    {""},
    {"call", CALL, RID_NESC},
    {""},
    {"signal", SIGNAL, RID_NESC},
    {"volatile", TYPE_QUAL, volatile_qualifier},
    {""},
    {"break", BREAK, NORID},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"register", SCSPEC, RID_REGISTER},
    {""}, {""},
    {"__builtin_va_arg", VA_ARG, NORID},
    {""}, {""}, {""}, {""}, {""},
    {"provides", PROVIDES, RID_NESC},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"unsigned", TYPESPEC, RID_UNSIGNED}
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct resword *
is_reserved_word (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
