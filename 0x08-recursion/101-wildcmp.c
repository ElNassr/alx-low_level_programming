#include <stdio.h>

int cmp(char *s1,char *s2, int l);
int len(char *s, int *p);

/**
 * wildcmp - checks if string are identical
 * @s1: string to check
 * @s2: second string
 *
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0;
	int *p = &i;
	int l1 = 0;
	int l2 = 0;

	l1 = len(s1, p) - 1;
	l2 = len(s2, p) - 1;
	if (l1 != l2)
	{
		return (0);
	}
	i = cmp(s1, s2, l1);
	return (i);
}

/**
 * cmp - check if it actually palidrome
 * @s1: string to check
 * @s2: second string to compare
 * @l: len of string
 *
 * Return: 1 if pal, o if not
 */
int cmp(char *s1,char *s2, int l)
{
	if (*s1 != *(s2))
	{
		if (*s2 != 42)
		{
			return (0);
		}
	}
	else if (*s1 != '\0')
	{
		cmp(s1 + 1, s2 + 1, l);
	}
	else
	{
		return (1);
	}
	return (1);
}

/**
 * len - calculates the len for string
 * @s: string to fin len dor
 * @p: pointer to increment each time
 *
 * Return: return the len for this function
 */
int len(char *s, int *p)
{
	if (*s != '\0')
	{
		(*p)++;
		len(s + 1, p);
	}
	else
	{
		return (*p);
	}
	return (*p);
}
