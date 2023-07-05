#include <stdio.h>

/**
 * _puts_recursion - function that prints string
 * @s: string to print
 *
 * Return: No return for this function
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		putchar(*(s + i));
		i++;
	}
	putchar('\n');
}
