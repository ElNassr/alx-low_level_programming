#include <stdio.h>

/**
 * _pow_recursion - raises x to the power of y
 * @x: the number to be raised to power
 * @y: the power to be raised to
 *
 * Return: am integer as power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
