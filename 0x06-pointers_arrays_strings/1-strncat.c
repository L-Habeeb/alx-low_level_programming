#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - function to catenate a certain number of n
 * @dest: parameter that point to the array
 * @src: parameter that point to the array
 * @n: number of other string to catenate
 *
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
