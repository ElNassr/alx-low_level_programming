#include <stdio.h>
#include "main.h"

void upperc(char *c);

/**
 * string_toupper -  function
 * @c: char input to make upper
 *
 * Return: 1 if lower, 0 otherwise
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		upperc((c+i));
	}
	return(c);
}

/**
 * upperc -  function
 * @c: char input to check
 *
 * Return:No return for this function
 */
void upperc(char *c)
{
	int i = 65;
	int j = 90;

	if (*c >= i)
	{
		if (*c <= j)
		{
			*c -= 32;
		}
	}
}
