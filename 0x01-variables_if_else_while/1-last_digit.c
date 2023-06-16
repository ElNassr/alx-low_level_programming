#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* No more libraries are added */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
/* your code goes there */
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and", n, m);
		printf(" is less than 6 and not 0\n");
	}
	return (0);
}
