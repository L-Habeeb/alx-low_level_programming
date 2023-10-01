#include "main.h"

/**
 * _pow_recursion - function to returns the value of x raised to the power of y
 * @x: value that should be raise
 * @y: power
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
