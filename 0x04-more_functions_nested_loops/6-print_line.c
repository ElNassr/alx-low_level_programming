#include <stdio.h>

/**
* print_line - function
*
* No return in this function
*/
void print_line(int n)
{
	int i = 95;
	int j = 0;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (j < n)
		{
			putchar(i);
			j++;
		}
		putchar('\n');
	}
}
