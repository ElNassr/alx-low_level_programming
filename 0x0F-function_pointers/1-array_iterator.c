#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function in argument at every element of array
 * @array: array to iterate on
 * @size: size of array
 * @action: pointer to function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		if (action != NULL)
		{
			action(array[i]);
		}
	}
}
