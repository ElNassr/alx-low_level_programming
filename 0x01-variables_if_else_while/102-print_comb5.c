#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point
*
* Return: 0 on success
*/
int main(void)
{
	int i, j, k = 48;
	int l, c1 = 49;
	int c2, c3 = 50;
	int c4, c5, c6 = 51;

	while (i <= 57)
	{
		j = c1;
		c3 = c2;
		c5 = c4;
		while (j <= 57)
		{
			k = c3;
			c6 = c5;
			while (k <= 57)
			{
				l = c6;
				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					l++;
					if (i != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
				k++;
				c6++;
			}
			j++;
			c3++;
			c5++;
		}
		i++;
		c1++;
		c2++;
		c4++;
	}
	putchar('\n');
	return (0);
}
