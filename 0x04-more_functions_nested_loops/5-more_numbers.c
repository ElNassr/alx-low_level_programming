#include <stdio.h>

/**
* more_numbers - print numbers 10 times
* no arguments
*
* No return
*/
void more_numbers(void)
{
	int i = 48;
	int j = 49;
	int c, k = 0;

	while (c < 10)
	{
		i = 48;
		k = 0;
		while (k <= 14)
		{
			if (k > 9)
				putchar(j);
			putchar(i);
			if (k == 9)
				i = 47;
			k++;
			i++;
		}
		c++;
		putchar('\n');
	}
}
