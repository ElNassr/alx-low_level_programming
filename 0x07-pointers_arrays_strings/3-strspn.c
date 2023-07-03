#include <stdio.h>

/**
 * _strspn - function that gets the prefix of a substring
 * @s: string that contains the prefix
 * @accept: substring to llok for in s
 *
 * Return: the number of bytes if the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int e = 0;
	unsigned int l = 0;

	while (*(s + i) != '\0')
	{
		e = 0;
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
					e = 1;
			}
			j++;
		}
		if ((l == 0) && (e == 1))
		{
			l = 1;
		}
		if ((l == 1) && (e == 0))
		{
			return (k);
		}
		if ((l == 1) && (e == 1))
		{
			k++;
		}
		i++;
	}
	return (k);
}

