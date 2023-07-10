#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: return a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
