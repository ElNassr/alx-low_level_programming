#include <stdio.h>

/**
 * infinite_add - function to infinite add
 * @n1: first n1 to add
 * @n2: second n2 to add
 * @r: r variable to do what it does
 * @size_r: size of variable r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	*n1 = *n2 + *r;
	*r += size_r;
	return (n1);
}
