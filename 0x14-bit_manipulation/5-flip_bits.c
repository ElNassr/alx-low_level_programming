#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Perform bitwise exclusive or between n and m */
	unsigned long int xor = n ^ m;
	/* Initialize a counter for the number of bits to flip */
	unsigned int count = 0;

	/* Loop until xor becomes zero */
	while (xor > 0)
	{
		/* Increment count if the least significant bit is 1 */
		if (xor & 1)
			count++;

		/* Right shift xor by one bit */
		xor >>= 1;
	}

	/* Return the count */
	return (count);
}
