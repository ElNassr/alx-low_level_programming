#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0on success
 */
int main(void)
{
	int i = "a";
	char s = "\n";

	while (i <= "z")
	{
		putchar(i);
		i++;
        }
	putchar(s);
	return (0);
}
