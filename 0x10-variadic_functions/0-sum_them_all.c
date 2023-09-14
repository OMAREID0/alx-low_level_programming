#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum of all parameters
 * @n: constant of namber of arguments
 *
 * Return: return (sum) when sucssed
 * return 0 if (n == 0)
 */

int sum_them_all(const unsigned int n, ...)
{
        va_list arg;
        int i, sum = 0;

        if (n == 0)
                return 0;

        va_start (arg, n);

        for(i = 0 ; i < n ; i++)
        {
                sum += va_arg (arg, int);
        }
        return (sum);
}
