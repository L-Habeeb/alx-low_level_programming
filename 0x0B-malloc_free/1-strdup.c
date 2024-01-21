#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly memory.
 * @str: the char.
 *
 * Return: 0.
 */
char *_strdup(char *str)
{
	int i, len;

	char *new;

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	len = i;

	new = (char *)malloc(sizeof(char) * len);

	for (i = 0; str[i] != '\0'; i++)
	{
		new[i] = str[i];
	}

	return (new);
}
