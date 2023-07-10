#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *p;

	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (*(s2 + j) != '\0')
		{
			j++;
		}
	}
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (k = 0; k < i; k++)
		{
			*(p + k) = *(s1 + k);

		}
	}
	if (s2 != NULL)
	{
		for (k = 0; k < j; k++)
		{
			*(p + i + k) = *(s2 + k);
		}
	}
	return (p);
}
