#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int power = 1;
	/* If n is zero, print 0 and return */
	if (n == 0)
	{
		putchar('0');
		return;
	}

	/* Find the highest power of 2 that is less than or equal to n */

	while (power <= n)
	{
		power <<= 1;
	}

	/* Loop from the highest power to the lowest, printing 1 or 0 */
	while (power > 0)
	{
		if (n & power)
			putchar('1');
		else
			putchar('0');

		/* Right shift n and power by one bit */
		power >>= 1;
	}
}

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* If index is greater than the number of bits in n, return -1 */
	if (index >= sizeof(n) * 8)
		return (-1);

	/* Left shift 1 by index bits and perform bitwise and with n */
	return ((n & (1 << index)) ? 1 : 0);
}
