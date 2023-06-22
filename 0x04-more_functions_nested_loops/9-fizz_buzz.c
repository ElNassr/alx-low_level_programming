#include <stdio.h>
#include <stdlib.h>

/**
 * fizz_buzz - function
 *
 * Return:  0 on success
 */
int main(void)
{
	int i = 1;

	for (i = 1; i < 101; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			if (i == 100)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
