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
int binary_search(int *array, size_t size, int value)
{
if (array == NULL)
{
return (-1);
}
int left = 0;
int right = size - 1;

while (left <= right)
{
int mid = left + (right - left) / 2;

printf("Searching in array: ");
for (int i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i != right)
{
printf(", ");
}
}
printf("\n");

if (array[mid] == value)
{
return (mid);
}

if (array[mid] < value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}

return (-1);
}


int main(void)
{
int array[] = {
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
};
size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
return (EXIT_SUCCESS);
}
