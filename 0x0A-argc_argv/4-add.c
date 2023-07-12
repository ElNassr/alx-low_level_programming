#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: number of argument given to the program
 * @argv: poiner to the list of arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		k = 0;
		while (argv[i][k] != '\0')
		{
			k++;
		}
		for (j = 0; j < k; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
