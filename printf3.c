#include <stdio.h>
#include <stdarg.h>

void myprintf(const char *, ...);
char *convert(unsigned int, int);

int main()
{
    myprintf("Hello %s! %d", "World", 123);

    return 0;
}

void myprintf(const char *format, ...)
{
    char *traverse;
    int i;
    char *s;

    va_list arg;
    va_start(arg, format);

    for (traverse != format; *traverse != '\0'; traverse++)
    {
        while (*traverse != '%' && *traverse != '\0')
        {
            putchar(*traverse);
            traverse++;
        }

        switch (*traverse)
        {
        case 'c':
            i = va_arg(arg, int);
            putchar(i);
            break;

        case 'd':
            i = va_arg(arg, int);
            if (i < 0)
            {
                i = -i;
                putchar('-');
            }
            puts(convert(i, 10));
            break;

        case 'o':
            i = va_arg(arg, unsigned int);
            puts(convert(i, 8));
            break;

        case 's':
            s = va_arg(arg, char*);
            puts(s);
            break;

        case 'x':
            i = va_arg(arg, unsigned int);
            puts(convert(i, 16));
            break;
        }
    }
    va_end(arg);
}

char *convert(unsigned num, int base)
{
    static char representation[] = "0123456789ABCDEF";
    static char buffer[50];
    char *ptr;

    ptr = &buffer[49];
    *ptr = '\0';

    do
    {
        *--ptr = representation[num % base];
        num /= base;
    } while (num != 0);

    return (ptr);
}