#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 -  function
*
* No return in this function
*/
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		i = 97;

		while (i <= 122)
		{
			putchar(i);
			i++;
		}
		putchar('\n');
	}
}
