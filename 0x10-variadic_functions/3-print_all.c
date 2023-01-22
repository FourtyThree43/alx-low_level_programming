#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all arguments passed to it
 * @format: string of format specifiers
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list args;
    char *separator = "";
		int i;

    va_start(args, format);

    for (i = 0; format[i]; i++)
    {
				/* switch based on format specifier */
        switch (format[i])
        {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", separator, va_arg(args, double));
                break;
            case 's':
                printf("%s%s", separator, va_arg(args, char *));
                break;
            default:
                continue;
        }
				/* set separator to "," after first argument */
        separator = ", ";
    }
    printf("\n");
    va_end(args);
}
