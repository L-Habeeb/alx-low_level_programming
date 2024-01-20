#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of char.
 * @size: size of array
 * @c: char to be initialize
 *
 * Return: Pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;
	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(char) * size);

	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
