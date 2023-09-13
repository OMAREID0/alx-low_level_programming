#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @array: array gaven to do action in the elements stored in it.
 * @size: size of array.
 * @action: function will do changes in array elements.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if( !array || !size || !action)
		return;
	
	while(i < size)
	{
		action(array[i]);
		i++;
	}
}
