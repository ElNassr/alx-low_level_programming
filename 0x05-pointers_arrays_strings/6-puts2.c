#include <stdio.h>

/**
 * puts2 - print every caracterfolowed by nes line
 * @str: string to put
 *
 * Return: no return for this function
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str+i));
		putchar('\n');
	}
}
