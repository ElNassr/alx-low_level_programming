#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i=0;
	char s[]="_putchar";

	for(i=0; i<7; i++)
	{
		putchar(s[i]);
	}
	putchar("\n");
	return (0);
}
