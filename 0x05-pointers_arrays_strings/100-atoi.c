#include <stdio.h>
int _isalpha(int c);

/**
 * _atoi: function that converts string to integer
 * @s: string that will be converted to integer
 *
 * Retunr: returns an integer if exist, 0 otherwise
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int r = 0;

	while (*(s + i) != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		r = _isalpha(*(s + j));
	}
	return (r);
}

/**
 * _isalpha -  function
 * @c: char input to chack
 *
 * Return: 1 if alpha, 0 otherwise
 */
int _isalpha(int c)
{
	int i = 48;
	int j = 57;

	if (c >= i)
	{
		if (c <= j)
		{
			return (c - 48);
		}
		else
		{
			return (0);
		}
	}
	else if (c >= 65)
	{
		if (c <= 90)
			return (c - 48);
		else
			return (0);
	}
	else
	{
		return (0);
	}
}
