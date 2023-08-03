#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary to int
 * @b: pointer to string of binary
 *
 * Return: converted number or 0 in error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int t;
	int i = 0;
	int j, c;
	int z = 48;
	int o = 49;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if ((b[i] != z ) && (b[i] != o))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	j = i - 1;
	while (j >= 0)
	{
		if (b[j] == o)
		{
			t = 1;
			for (c = 1; c < i - j; c++)
			{
				t *= 2;
			}
			n += t;
		}
		j--;
	}
	return (n);
}
