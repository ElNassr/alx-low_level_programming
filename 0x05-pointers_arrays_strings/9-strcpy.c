#include <stdio.h>

/**
 * _strcpy - function that copies string
 * @dest: pointer to destination address
 * @src: pointer to source address
 *
 * Return: pointer to destination address
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
