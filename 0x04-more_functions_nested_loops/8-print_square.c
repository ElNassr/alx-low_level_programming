#include <stdio.h>

void print_hash(int);

/**
* print_square - print a square
* @n: size of square to print
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
* print_hash - function to print hashes
* @n: argument Number of hashes in one line
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
