#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory and initialise to 0
 * @nmemb: number of array member
 * @size: size of each array member
 *
 * Return: returns a pointer to the adresse
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, nmemb * size);
	return (p);
}
