#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to the pointer to be set
 * @to: pointer to the char value to be set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
