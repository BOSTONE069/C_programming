    #include<stdio.h>
    /**
     * `gets()` is a function that reads a line from stdin into the buffer pointed to by `s` until
     * either a terminating newline or EOF, which it replaces with a null byte ('\0')
     */
    void main ()
    {
        char s[30];
        printf("Enter the string? ");
        gets(s);
        printf("You entered %s",s);
    }