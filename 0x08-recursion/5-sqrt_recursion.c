#include <stdio.h>

int square(int n, int *p);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find natural square root for
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 0;
	int *p = &i;

	i = square(n, p);
	return (i);
}

/**
 * square - function that calculates square root
 * @n: number to find square root for
 * @p: pointer to increment each time
 *
 * Return: int as square root for n
 */
int square(int n, int *p)
{
	if ((n == 0) || (n == 1))
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (((*p) * (*p)) == n)
		{
			return (*p);
		}
		else
		{
			(*p)++;
			square(n, p);
		}
	}
	return(*p);
}
