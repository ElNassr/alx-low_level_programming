#include <stdio.h>

/**
 * print_array - function to print an array
 *@a: array to be printed by function
 *@n: number of elements to print
 *
 * Return: no return for this function
 */
void print_array(int *a, int n)
{
	int i = 0;
	int l = 48;

	for (i = 0; i < n; i++)
	{
		putchar(l + (*(a + i)));
	}
	putchar('\n');
}
