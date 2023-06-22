#include <stdio.h>

/**
* print_most_numbers - print number except 2 and 4
*no arguments
*
* no return
*/
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if ((i != 50) && (i != 52))
			_putchar(i);
		i++;
	}
	_putchar('/n');
}
