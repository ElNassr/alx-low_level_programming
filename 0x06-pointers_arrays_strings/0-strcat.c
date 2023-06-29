#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: variable for contenation destination
 * @src: Variable for the string to concatenat in dest
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		j++;
	}
	for (c = 0; c < j; c++)
	{
		*(dest + i + c) = *(src + c);
	}
	return (*dest);

}
