#include <stdio.h>

void print_hash(int);

/**
* print_square - print a square
* no arguments
*
* No return
*/
void print_square(int n)
{
	int j = 0;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (j < n)
		{
			print_hash(n);
			putchar('\n');
			j++;
		}
	}
}

/**
* print_diag_line - function
* @j: argument
*
* No return
*/
void print_hash(int n)
{
	int k = 0;
	int s = 35;

	while (k < n)
	{
		putchar(s);
		k++;
	}
}
