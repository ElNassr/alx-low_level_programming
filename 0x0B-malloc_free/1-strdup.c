#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - allocate space in memory and copy the string given as a parameter
 * @str: string to copy in memory
 *
 * Return: returns a pointer to the newly allocated memory
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		i++;
	}
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		*(p + j) = *(str + j);
	}
	return (p);
}
