#include <stdio.h>
#include "main.h"

/**
* _islower -  function
* @c: char input to chack
*
* Return: 1 if lower, 0 otherwise
*/
int _islower(int c)
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
	else
	{
		return (0);
	}
}
