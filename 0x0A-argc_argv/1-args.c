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

	printf("%d\n\n", argc);
	if (argv[0][0] == 0)
	{
		return (argv[0][0]);
	}
	return (0);
}
