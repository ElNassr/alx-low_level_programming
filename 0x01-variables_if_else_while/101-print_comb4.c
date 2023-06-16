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
	int k = 50;
	int c1 = 49;
	int c2 = 50;

	while (i <= 55)
	{
		j = c1;
		while (j <= 56)
		{
			k = c2;
			while (k <= 57);
			{
				putchar(i);
				putchar(j);
				putchar(k);
				k++;
				if (i != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
			j++;
			c2++;
		}
		i++;
		c1++;
	}
	putchar('\n');
	return (0);
}
