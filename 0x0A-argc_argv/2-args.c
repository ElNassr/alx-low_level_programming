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
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
