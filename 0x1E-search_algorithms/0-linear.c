#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value using linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return (i);
}

if (i == (size - 1))
{
return (-1);
}
}
}
