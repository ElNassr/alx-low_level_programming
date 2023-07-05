#include <stdio.h>

int prime(int n, int *p);

/**
 * is_prime_number - checks if n is prime number
 * @n: number to check if is prime number
 *
 * Return: 1if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int j = 2;
	int *w = &j;

	j = prime(n, w);
	return (j);
}

/**
 * prime - finds if prime or not
 * @n: number to check
 * @p: pointer to increment
 *
 * Return: 1 is prime, 0 if not
 */
int prime(int n, int *p)
{
	if (n <= 1)
	{
		return (0);
	}
	else if ((n == 2) || (n == 3))
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
		prime(n, p);
	}
	return (1);
}
