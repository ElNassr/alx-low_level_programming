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
	int j = 49;
	int c = 49;

	while (i <= 56)
	{
		j = c;
		while (j <= 57 )
		{
			putchar(i);
			putchar(j);
			j++;
		}
		if (i != 56)
		{
			putchar(44);
			putchar(32);
		}
		i++;
		c++;
	}
	putchar('\n');
	return (0);
}
