#include <stdio.h>

/**
 * _strlen - calculate the length of a string
 * @s: the string to find len for
 *
 * Return: returns an integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
