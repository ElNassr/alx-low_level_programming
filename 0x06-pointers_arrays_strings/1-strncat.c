#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: variable for contenation destination
 * @src: Variable for the string to concatenat in dest
 * @n: number of bytes to concatenate
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (c = 0; c < n; c++)
	{
		*(dest + i + c) = *(src + c);
	}
/*	if (*(dest + i + n - 1) != '\0')
 		*(dest + i + n - 2) = '\0';
		*/
	return (dest);

}
