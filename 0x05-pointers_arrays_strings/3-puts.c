#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 *
 * Return: No return for this function
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
