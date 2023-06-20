#include <stdio.h>
#include "main.h"

/**
* _isalpha -  function
* @c: char input to chack
*
* Return: 1 if alpha, 0 otherwise
*/
int _isalpha(int c)
{
	int i = 97;
	int j = 122;

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
	else if (c >= 65)
	{
		if (c <= 90)
			return (1);
		else
			return (0);
	}
	else
	{
		return (0);
	}
}
