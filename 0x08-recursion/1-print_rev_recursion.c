#include <stdio.h>

int len(char *s, int *l);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: no return for this function
 */
void _print_rev_recursion(char *s)
{
	int l = 0;
	int *p = &l;

	if (*p == 0)
	{
	len(s, p);
	}
	if (*p != 0)
	{
		(*p)--;
		putchar(*(s + (*p)));
		_print_rev_recursion(s);
	}
	else
	{
		putchar('\n');

	}
}

/**
 * len - returns the length of a string
 * @s: string to find len for
 * @p: pointer to use for length calculation
 * Return: returns in integer
 */
int len(char *s, int *p)
{
	int i = 0;

	if (*s != '\0')
	{
		(*p)++;
		len((s + 1), p);
	}
	i = *p;
	return (i);
}
