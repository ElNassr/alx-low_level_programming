#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array to contains the arguments
 *
 * Return: returnsa pointer to the concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int c = 0;
	char *p;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			c++;
		}
	}
	p = malloc(sizeof(char) * (c + ac + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	c = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*av[j] != '\0')
		{
			p[c] = *av[j];
			j++;
			c++;
		}
		p[c] = *av[j];
		p[c + 1] = '\n';
		c += 2;
		*av++;
	}
	return (p);
}
