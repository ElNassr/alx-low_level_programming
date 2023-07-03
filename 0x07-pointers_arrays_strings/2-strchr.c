#include <stdio.h>

/**
 * _strchr - function that locates acharacter in a string
 * @s: string to look in for character
 * @c: charter to look for in string
 *
 * Return: a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
