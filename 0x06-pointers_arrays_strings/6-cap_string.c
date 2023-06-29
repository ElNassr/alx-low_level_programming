#include <stdio.h>
#include "main.h"

void upperc(char *c);

/**
 * cap_string -  function to bring to upper
 * @c: char input to make upper
 *
 * Return: return the string in upper case
 */
char *cap_string(char *c)
{
	int s[] = {32, 9, 10, 44, 46, 59, 33, 34, 63, 40, 41, 123, 125};
	int i = 0;
	int j = 0;

	while (*(c + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(c + i) == s[j])
			{
				upperc((c + i + 1));
			}
		}
		i++;
	}
	return (c);
}

/**
 * upperc -  function to bring caracter to upper
 * @c: char input to check
 *
 * Return: No return for this function
 */
void upperc(char *c)
{
	int i = 97;
	int j = 122;

	if (*c >= i)
	{
		if (*c <= j)
		{
			*c -= 32;
		}
	}
}
