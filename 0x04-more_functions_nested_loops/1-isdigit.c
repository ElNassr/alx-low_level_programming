#include <stdio.h>
#include "main.h"

/**
 * _isdigit -  function
 * @c: char input to chack
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i = 48;
	int j = 57;

	if (c >= i)
	{
		if (c <= j)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}
