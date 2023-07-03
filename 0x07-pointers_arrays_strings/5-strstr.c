#include <stdio.h>

/**
 * _strspn - function that gets the prefix of a substring
 * @haystack: string that contains the prefix
 * @needle: substring to look for in haystack
 *
 * Return: the number of bytes if the initial segment of s
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (*(haystack + i) != '\0')
	{
		j = 0;
		if (*(haystack + i) == *needle)
		{
			while (*(needle + j) != '\0')
			{
				if (*(haystack + i + j) == *(needle + j))
				{
					j++;
					continue;
				}
				else
				{
					j++;
					break;
				}
				j++;
			}
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
