#include <stdio.h>

int len(char *s);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: no return for this function
 */
void _print_rev_recursion(char *s)
{
	int l = 0;

	l = len(s);
	if (l >= 0)
	{
		putchar(*(s + l));
		l--;
		_print_rev_recursion(s + l - 1);
	}
}

/**
 * len : returns the length of a string
 * @s: string to find len for
 *
 * Return: returns in integer
 */
int len(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		i++;
		len(s + 1);
	}
	else
	{
		return (i);
	}
	return (i);
}
