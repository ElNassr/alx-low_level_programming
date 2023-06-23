#include <stdio.h>

void print_diag_line(int j);

/**
* print_diagonal - print diagonal line
* @n: number of diagonals
*
* No return
*/
void print_diagonal(int n)
{
	int i = 92;
	int j = 0;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (j < n)
		{
			if (j == 0)
			{
				putchar(i);
				putchar('\n');
			}
			else if (j <= (n - 1))
			{
				print_diag_line(j);
				putchar('\n');
			}
			j++;
		}
	}
}

/**
* print_diag_line - function
* @j: number of spaces befor diag
*
* No return
*/
void print_diag_line(int j)
{
	int k = 0;
	int s = 32;
	int i = 92;

	while (k < j)
	{
		putchar(s);
		k++;
	}
	putchar(i);
}
