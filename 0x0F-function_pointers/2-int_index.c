#include <stdlib.h>
#include "function_pointer.h"


/**
 *int_index - searches for integer
 *@array: array of intgers to search in
 *@size: size of array
 *@cmp: pointer to function
 *
 * Return: return index of the first element that (cmp) does not return 0 (succses)
 * return (-1) if no element matches, return (0) if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
        if(size <= 0 || !array || !cmp)
                return (-1);
        int i, ret;
        for( i = 0; i < size; i++)
        {
            if((cmp (array[i])) == 1)
            {
                return (i);
            }
        }
}
