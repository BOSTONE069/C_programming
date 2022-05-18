#include<stdio.h>
#include<stdarg.h>

void myprintf(const char *,...);
char* convert(unsigned int, int);

int main()
{
    myprintf("www.firecode.com \n %d", 9);

    return 0;
}

void Myprintf(char *format, ...)
{
    char *traverse;
    int i;
    char *s;
    std::string output;

    // Module 1: Initializing Myprintf's arguments
    va_list arg;
    va_start(arg, format);

    for (traverse = format; *traverse != '\0'; traverse++)
    {
        while (*traverse != '%' && *traverse != '\0')
        {
            output += *traverse; // Append char to current string.
            traverse++;
        }

        traverse++;

        // Module 2: Fetching and executing arguments
        switch (*traverse)
        {

        case 'c':
            i = va_arg(arg, int); // Fetch char argument

            output += convert((i - 48), 10);
            break;

        case 'd':
            i = va_arg(arg, int); // Fetch Decimal/Integer argument
            if (i < 0)
            {
                i = -i;
                output += '-';
            }
            output += convert(i, 10);
            break;

        case 'o':
            i = va_arg(arg, unsigned int); // Fetch Octal representation
            output += convert(i, 8);
            break;

        case 's':
            s = va_arg(arg, char *); // Fetch string
            output += s;
            break;

        case 'x':
            i = va_arg(arg, unsigned int); // Fetch Hexadecimal representation
            output += convert(i, 16);
            break;
        }
    }

    // Module 3: Closing argument list to necessary clean-up
    //  Module 3.1: Output the generated string.
    puts(output.c_str());
    va_end(arg);
}

char *convert(unsigned num, int base)
{
    static char representation[]= "0123456789ABCDEF";
    static buffer[50];
    char *ptr;

    ptr = &buffer[49];
    *ptr = '\0';

    do
    {
        *--ptr = representation[num%base];
        num /= base;
    }while(num != 0);

    return(ptr);
}