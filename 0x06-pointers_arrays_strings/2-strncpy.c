#include <stdio.h>

/**
 * _strncpy - function that concatenates two strings
 * @dest: variable for contenation destination
 * @src: Variable for the string to concatenat in dest
 * @n: number of bytes to concatenate
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;
	int c = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		j++;
	}
	if (n <= j)
		j = n;
	if (i <= j)
		j = i;
	for (c = 0; c < j; c++)
	{
		*(dest + c) = *(src + c);
	}
	if (*(dest + n - 1) != '\0')
		*(dest + n) = '\0';
	return (dest);
}
