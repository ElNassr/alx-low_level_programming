#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - print sum of two diagonals of a square matrix of integers
 * @a: pointer to the starting of square matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	/* Calculate the sum of the first diagonal*/
	for (i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
	}

	/* Calculate the sum of the second diagonal*/
	for (i = 0; i < size; i++)
	{
		s2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n");
}
