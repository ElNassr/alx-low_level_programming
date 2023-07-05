#include <stdio.h>

void len(char *s, int *p);

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to fin length for
 *
 * Return: length of a string as integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int *p = &i;

	len(s, p);
	return (i);
}

/**
 * len - calculates the len for string
 * @s: string to fin len dor
 * @p: pointer to increment each time
 *
 *return: no return for this function
 */
void len(char *s, int *p)
{
	if (*s != '\0')
	{
		(*p)++;
		len(s + 1, p);
	}

}
