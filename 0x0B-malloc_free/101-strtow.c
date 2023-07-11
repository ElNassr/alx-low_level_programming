#include <stdio.h>
#include <stdlib.h>

int countw(char *str);

/**
 * strtow - split string into words
 * @str: string to split
 *
 * @Return: pointer to the array of words splitted
 */
char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int c = 0;
	char **p;

	c = countw(str);
	p = malloc(c * sizeof(char *));
	if (p == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			j = 0;
			i++;
			continue;
		}
		else
		{
			if ((str[i + 1] == 32) || (str[i + 1] == '\0'))
			{
				j++;
				p[c] = malloc((j + 1) * sizeof(char));
				if (p[c] == NULL)
				{
					for (j = 0; j < c; j++)
					{
						free(p[j]);
					}
					free(p);
					return (NULL);
				}
				c++;
			}
			j++;
			i++;
		}
	}
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			j = 0;
			i++;
			continue;
		}
		else
		{
			p[c][j] = str[i];
			if (str[i + 1] == 32)
			{
				c++;
			}
			j++;
			i++;
		}
	}
	return (p);
}

/**
 * countw - count string by words
 * @str: string to count words for
 *
 * @Return: Number of words in string
 */
int countw(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			i++;
			continue;
		}
		else
		{
			if (str[i + 1] == 32)
			{
				j++;
			}
			i++;
		}
	}
	return (j);
}
