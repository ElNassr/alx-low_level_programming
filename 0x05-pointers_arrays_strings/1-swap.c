#include <stdio.h>

/**
 * swap_int - function that swaps two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: No return in this function
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
