#include <stdio.h>

/**
 * reverse_array - function that reverses array
 * @a: array to reverse
 * @n: elements of the array
 *
 * Return: no return for this function
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;
	int j = 0;
	int t = 0;
	int *p = a;

	while (i >= j)
	{
		t = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = t;
		i--;
		j++;
	}
}
