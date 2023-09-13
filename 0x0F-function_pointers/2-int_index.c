#include "function_pointers.h"

/**
 *int_index - searches for integer
 *@array: array of intgers to search in
 *@size: size of array
 *@cmp: pointer to function
 *
 * Return: return index of the first element that (cmp)
 * does not return 0 (succses)
 * return (-1) if no element matches, return (0) if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
