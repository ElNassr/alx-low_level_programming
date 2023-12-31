#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary presentation of number
 * @n: number to make binary for
 *
 * return: No return for this function
 */
void print_binary(unsigned long int n)
{
	unsigned long int power = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (power <= n)
	{
		power <<= 1;
	}
	power >>= 1;
	while (power > 0)
	{
		if (n & power)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		power >>= 1;
	}
}
