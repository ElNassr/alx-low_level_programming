#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0on success
 */
int main(void)
{
	char i = 97;
	char s = "\n";

	while (i != 123)
	{
		putchar(i);
		i++;
        }
	putchar(s);
	return (0);
}
