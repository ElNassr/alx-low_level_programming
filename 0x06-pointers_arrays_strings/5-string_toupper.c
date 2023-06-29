#include <stdio.h>
#include "main.h"

void upperc(char *c);

/**
 * string_toupper -  function to bring to upper
 * @c: char input to make upper
 *
 * Return: return the string in upper case
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		upperc((c + i));
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
