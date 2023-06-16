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

	while (i <= 122)
	{
		putchar(i);
		i++;
        }
	putchar('\n');
	return (0);
}
