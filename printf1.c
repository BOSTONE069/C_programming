#include <stdio.h>
#include <stdarg.h>
#include <libioP.h>

#undef printf


int
_printf(const char *format, ...)
{
    va_list arg;
    int done;

    va_start(arg, format);
    done = vfprintf(stdout, format, arg);
    va_end(arg);

    return done;
}

#undef _IO_printf
ldbl_strong_alias(_printf, printf);

ldbl_strong_alias(_printf, _IO_printf);