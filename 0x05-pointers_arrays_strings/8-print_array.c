#include <stdio.h>

int len(int n);
void print_number(int n);

/**
 * print_array - function to print an array
 *@a: array to be printed by function
 *@n: number of elements to print
 *
 * Return: no return for this function
 */
void print_array(int *a, int n)
{
	int i = 0;
	int c = 44;
	int s = 32;

	for (i = 0; i < n; i++)
	{
		print_number(*(a + i));
		if (i != (n - 1))
		{
			putchar(c);
			putchar(s);
		}
	}
	putchar('\n');
}


/**
 * print_number - print numbers from input
 * @n: input number to print
 *
 * No return value
 */
void print_number(int n)
{
	int i = 48;
	int m = 45;
	int c = 0;
	int d = 0;
	int l = 1000000000;
	int k = 0;
	int x = n;

	k = len(n);
	if (n < 0)
	{
		putchar(m);
		x = -n;
	}
	for (c = 0; c < 9; c++)
	{
		if (c >= k)
		{
			for (d = 0; d < 10; d++)
			{
				if ((x / l) == d)
				{
					i += d;
					putchar(i);
				}
			}
		}
		x = x % l;
		l /= 10;
		i = 48;
	}
	putchar((i + (x % 10)));
}

/**
 * len - function that returns the number of digit in an integer
 * @n: number to calculate the len of
 *
 * Return: give back the len of a number
 */
int len(int n)
{
	int l = 1000000000;
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		if ((n / l) != 0)
		{
			return (i);
		}
		l /= 10;
	}
	return (i);
}
