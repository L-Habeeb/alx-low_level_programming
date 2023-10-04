#include "main.h"

/**
 * _puts_recursion - function that print a spring followed by a new line
 *
 * @s: the string parameter
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
