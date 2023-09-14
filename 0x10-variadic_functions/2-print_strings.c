#include "variadic_functions.h"

/**
 * print_strings - print number of strings
 * @separator: separate betwen strings
 * @n: number of arguments passed in function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
        char *str;
	
	va_list string;

        va_start(string, n);

        for(i = 0; i < n; i++)
        {
            	str = (va_arg(string, char *));
                if (!separator)
		    	printf("%s", str);
		else if (separator && i == 0)
		    	printf("%s", str);
		else if (str == NULL)
			printf("nil");
		else
			printf("%s%s", separator, str);
        }

        va_end (string);

        printf("\n");
}
