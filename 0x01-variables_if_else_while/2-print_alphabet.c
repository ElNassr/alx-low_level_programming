#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0on success
 */
int main(void)
{
	int i = 97;
	char s = "\n";

	while (i <= 122)
	{
		putchar(i);
		i++;
        }
	putchar(s);
	return (0);
}
