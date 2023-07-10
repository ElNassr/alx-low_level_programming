#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: two dimension array
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **p;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
