#include <stdio.h>
#include "main.h"

/**
* print_sign -  function
* @n: number to check
*
* Return: No return in this function
*/
int print_sign(int n)
{
	int p = 43;
	int z = 79;
	int m = 45;

	if (n < 0)
	{
		putchar(m);
		return (-1);
	}
	else if (n == 0)
	{
		putchar(z);
		return (0);
	}
	else
	{
		putchar(p);
		return (1);
	}
}
