#include <stdio.h>

/**
 * leet - make mozart code
 * @c: caracter to encode
 *
 * Return: retuns the caracter encoded
 */
char *leet(char *c)
{
	int a[] = {65, 69, 79, 84, 76, 52, 51, 48, 55, 49};
	int j = 0;
	int i = 0;

	while (*(c + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (((*(c + i) == a[j]) || (*(c + i) == (a[j] + 32))))
			{
				*(c + i) = a[j + 5];
			}
		}
		i++;
	}
	return (c);
}
