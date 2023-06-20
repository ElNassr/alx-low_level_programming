#include <stdio.h>
#include "main.h"

/**
* print_alphabet -  function
*
* No return in this function
*/
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
