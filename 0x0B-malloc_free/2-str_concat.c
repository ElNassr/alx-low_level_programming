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

	if ((s1 == NULL) && (s2 != NULL))
	{
		return (s2);
	}
	if ((s2 == NULL) && (s1 != NULL))
	{
		return (s1);
	}
	if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		*(p + k) = *(s1 + k);
	}
	for (k = 0; k < j; k++)
	{
		*(p + i + k) = *(s2 + k);
	}
	return (p);
}
