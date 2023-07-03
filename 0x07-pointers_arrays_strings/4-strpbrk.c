#include <stdio.h>

/**
 * _strpbrk - function thatserch the prefix the prefix of a substring
 * @s: string that contains the prefix
 * @accept: substring to llok for in s
 *
 * Return: the number of bytes if the initial segment of s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
