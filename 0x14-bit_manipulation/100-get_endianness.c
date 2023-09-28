#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/* Declare an unsigned int variable and assign it a value */
	unsigned int x = 1;
	/* Declare a char pointer and point it to the address of x */
	char *c = (char *)&x;

	/* If the first byte of x is 1, then it is little endian */
	/* Otherwise, it is big endian */
	return (*c);
}
