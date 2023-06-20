#include <stdio.h>
#include "main.h"

/**
* print_alphabet function
*
* Return: 0 on success
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
