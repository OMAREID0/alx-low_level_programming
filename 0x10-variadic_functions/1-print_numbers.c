#include "variadic_functions.h"

/**
 * print_number - print number in order with separators
 * @separator: use to separat betwen every int
 * @n: number of argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list number;
        unsigned int i;

        va_start(number, n);

        for(i = 0; i < n; i++)
        {
            	if (!separator)
			printf("%d", va_arg(number, int));
		else if (separator && i == 0)
			printf("%d", va_arg(number, int));
		else
			printf("%s%d", separator, va_arg(number, int));
        }

        va_end (number);

        printf("\n");
}
