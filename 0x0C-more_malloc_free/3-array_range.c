#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		p[i] = min + i;
	}
	return (p);
}
