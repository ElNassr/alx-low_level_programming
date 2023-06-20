#include <stdio.h>
#include "main.h"

/**
* print_last_digit -  function
* @n: number to print last digit
*
* Return: last digit
*/
int print_last_digit(int n)
{
	int i = 0;

	i = n % 10;
	_putchar(i);
	return(i);
}
