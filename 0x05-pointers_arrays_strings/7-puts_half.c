#include <stdio.h>

/**
 * puts_half - function that print half of string
 * @str: string to be printed by this function
 *
 * Return: no return for this function
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	for (j = (i / 2); j < i; j++)
	{
		putchar(*(str + j));
	}
	putchar('\n');
}
