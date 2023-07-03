#include <stdio.h>

/**
 * _memcpy - fills memory with constant byte
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to copy from memory
 *
 * Return: returns a pointer to the memory changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
