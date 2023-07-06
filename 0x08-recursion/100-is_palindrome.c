#include <stdio.h>

int pal(char *s, int l);
int len(char *s, int *p);

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrom, 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int *p = &i;
	int l = 0;

	l = len(s, p) - 1;
	i = pal(s, l);
	return (i);
}

/**
 * pal - check if it actually palidrome
 * @s: string to check
 * @l: len of string
 *
 * Return: 1 if pal, o if not
 */
int pal(char *s, int l)
{
	if (*s != *(s + l))
	{
		return (0);
	}
	else if (l > 2)
	{
		pal(s + 1, l - 2);
	}
	else if (*s != *(s + 1))
	{
		return (0);
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
