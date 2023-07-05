#include <stdio.h>
#include <stdlib.h>
int len(char *s, int *l);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: no return for this function
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
