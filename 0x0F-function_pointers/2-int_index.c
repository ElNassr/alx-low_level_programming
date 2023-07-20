#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to function that compares two integers
 *
 * Return: the index of first element for which cmp does not retun 0 for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int r = 0;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((cmp != NULL) && (array != NULL))
		{
			r = cmp(array[i]);
			if (r != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
