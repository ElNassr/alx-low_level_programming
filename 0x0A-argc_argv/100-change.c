#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: number of argument given to the program
 * @argv: poiner to the list of arguments
 *
 * Return: Returns the number of arguments
 */
int main(int argc, char *argv[])
{
	int n, a, b, c, d = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("0\n");
	}
	a = n / 25;
	n %= 25;
	b = n / 10;
	n %= 10;
	c = n / 5;
	n %= 5;
	d = n / 2;
	n %= 2;
	printf("%d\n", (a + b + c + d + n));
	return (0);
}
