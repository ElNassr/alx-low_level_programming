#include <stdio.h>

/**
 * _strstr - function that finds the first occurrence of a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*(haystack + i) != '\0')
	{
		j = 0;
		if (*(haystack + i) == *needle)
		{
			while (*(needle + j) != '\0')
			{
				if (*(haystack + i + j) != *(needle + j))
				{
					break;
				}
				j++;
			}
			if (*(needle + j) == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
