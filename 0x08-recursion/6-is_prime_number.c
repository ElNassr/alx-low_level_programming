#include <stdio.h>
#include <stdlib.h>
int prime(int n, int s, int *p);
int square(int n, int *p);

/**
 * is_prime_number - checks if n is prime number
 * @n: number to check if is prime number
 *
 * Return: 1if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 0;
	int *p = &i;
	int j = 2;
	int *w = &j;

	i = square(n, p);
	printf("%d\n", i);
	j = prime(n, i, w);
	return (j);
}

/**
 * prime - finds if prime or not
 * @n: number to check
 * @s: square root of n
 * @p: pointer to increment
 *
 * Return: 1 is prime, 0 if not
 */
int prime(int n, int s, int *p)
{
	printf("%d\n", *p);
	if (n <= 1)
	{
		return (0);
	}
	else if ((n == 2) || (n == 3))
	{
		return (1);
	}
	else if ((*p) >= s)
	{
		return (1);
	}
	else if ((n % (*p)) == 0)
	{
		return (0);
	}
	else
	{
		(*p)++;
		prime(n, s, p);
	}
	return (1);
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
	return (*p);
}
