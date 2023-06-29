#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: return an integer depending on comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int l = 0;
	int k = 0;

	while (*(s1 + l) != '\0')
	{
		l++;
	}
	while (*(s2 + k) != '\0')
	{
		k++;
	}
	if (l < k)
	{
		return (-15);
	}
	else if (l > k)
	{
		return (15);
	}
	else
	{
		for (i = 0; i <= k; i++)
		{
			if (*(s1 + i) < *(s2 + i))
			{
				return (-15);
			}
			else if (*(s1 + i) > *(s2 + i))
			{
				return (15);
			}
		}
	}
	if (*(s1 + i) == *(s2 + i))
	{
		return (0);
	}
	return (0);
}
