#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point
*
* Return: 0 on success
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(",");
			putchar(" ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
