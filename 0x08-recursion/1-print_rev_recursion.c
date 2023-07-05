#include <stdio.h>
#include <stdlib.h>

void len(char *s, int *l);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: no return for this function
 */
void _print_rev_recursion(char *s)
{
	int l = 1;
	int *p = &l;

	len(s, p);
	if (s != '\0')
	{
		putchar(*(s + l));
		_print_rev_recursion(s - 1);
	}
}

/**
 * len - returns the length of a string
 * @s: string to find len for
 *
 * Return: returns in integer
 */
void len(char *s, int *p)
{
	if (*s != '\0')
	{
		*p++;
		len((s + 1), p);
	}
}
