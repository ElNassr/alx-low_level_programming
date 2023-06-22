#include <stdio.h>
#include "main.h"

/**
 * print_numbers -  function
 *
 * No return in this function
 */
void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
