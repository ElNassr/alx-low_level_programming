#include <stdio.h>

/**
 * rev_string - reverse a string given in argument
 * @s: string to reverse
 *
 * Return: no return for this function
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int t = 0;
	char *p = s;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while ((i / 2) >= 0)
	{
		t = *(p + j);
		*(p + j) = *(p + i);
		*(p + i) = t;
		i--;
		j++;
	}
}
