#include <stdio.h>

/**
 * print_rev - printd a string in reverse
 * @s: string to revert
 *
 * Return: No return for this function
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
