#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - split string into words
 * str: string to split
 *
 * Return: pointer to the array of words splitted
 */
char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	char **p = &str;

	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			i++;
			continue;
		}
		else
		{
			if (str[i - 1] != 32)
			{
				j++;
			}
			i++;
		}
	}
	p = malloc(j * sizeof(char *));
	i = 0;
	j = 0;
	while ()
	return (p);
}
