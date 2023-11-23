#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the pointer to the number to modify
 * @index: the index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* If index is greater than the number of bits in n, return -1 */
	if (index >= sizeof(*n) * 8)
		return (-1);

	/* Left shift 1 by index bits and perform bitwise complement */
	/* Then perform bitwise and with n */
	*n &= ~(1 << index);

	/* Return 1 on success */
	return (1);
}
