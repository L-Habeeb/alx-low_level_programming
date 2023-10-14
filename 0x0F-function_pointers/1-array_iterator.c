#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes  array
 * @array: the array
 * @size: the size
 * @action: function to perform on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
