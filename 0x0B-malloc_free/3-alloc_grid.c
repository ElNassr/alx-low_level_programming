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
	int *p1;
	int **p2;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	p1 = malloc(sizeof(int) * (width * height));
	if (p1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*(p1 + i + j) = 0;
		}
	}
	p2 = &p1;
	return (p2);
}
