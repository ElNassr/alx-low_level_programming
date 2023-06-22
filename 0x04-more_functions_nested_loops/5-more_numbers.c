#include <stdio.h>

/**
* more_numbers - print numbers 10 times
* no arguments
*
* does not return anything
*/
void more_numbers(void)
{
	int i = 48;
	int j = 49;
	int c = 0;
	int k = 0;

	while (c < 10)
	{
		i = 48;
		k = 0;
		while (k <= 14)
		{
			if (k > 10)
			{
				putchar(j);
			}
			putchar(i);
			if (k == 9)
			{
				i = 48;
			}
			k++;
			i++;
		}
		c++;
	}
}
