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
	p = malloc(sizeof(int) * (width * height));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
