#include <stdio.h>

/**
 * _puts_recursion - function that prints string
 * @s: string to print
 *
 * Return: No return for this function
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*(s));
		_puts_recursion(s + 1);
	}
	putchar('\n');
}
