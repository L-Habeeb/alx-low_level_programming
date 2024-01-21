#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly memory.
 * @str: the char.
 *
 * Return: 0.
 */
char *_strdup(char *str)
{
	char *new;

	int i, r;

	i = r = 0;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
		new = (char *)malloc(sizeof(char) * (i + 1));
	}

	if (new == 0)
	{
		return (NULL);
	}
	else
	{
		for (r = 0; str[r] != '\0'; r++)
		{
			new[r] = str[r];
		}
	}

	return (new);
}
