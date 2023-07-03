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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int e = 0;
	unsigned int l = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		if (*(haystack + i) == *needle)
		{
			while (*(needle + j) != '\0')
			{
				if (*(haystack + i + j) == *(needle + j))
				{
					continue;
				}
				else
				{
					break;
				}
			}
			return (haystack + i);
		}
	}
	return (NULL);
}
