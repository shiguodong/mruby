/*
** mrbconf.h - mruby core configuration
** 
** See Copyright Notice in mruby.h
*/

#ifndef MRUBYCONF_H
#define MRUBYCONF_H

#include <stdint.h>
typedef double mrb_float;
typedef int32_t mrb_int;
typedef intptr_t mrb_sym;

#define readint(p,base) strtol((p),NULL,(base))
#define readfloat(p) strtod((p),NULL)

#undef  INCLUDE_ENCODING   /* not use encoding classes (ascii only) */
#define INCLUDE_ENCODING   /* use UTF-8 encoding classes */

#undef  INCLUDE_REGEXP     /* not use regular expression classes */
#define INCLUDE_REGEXP     /* use regular expression classes */

#ifdef  INCLUDE_REGEXP
# define INCLUDE_ENCODING  /* Regexp depends Encoding */
#endif

#undef  HAVE_UNISTD_H /* WINDOWS */
#define HAVE_UNISTD_H /* LINUX */

#define SIZEOF_INT              4
#define SIZEOF_SHORT            2
#define SIZEOF_LONG             4
#define SIZEOF_LONG_LONG        8
#define SIZEOF___INT64          0
#define SIZEOF_VOIDP            4
#define SIZEOF_FLOAT            4
#define SIZEOF_DOUBLE           8

#ifndef FALSE
# define FALSE 0
#endif

#ifndef TRUE
# define TRUE 1
#endif

#endif	/* MRUBYCONF_H */
