#include <stdio.h>

/**
 * leet - make mozart code
 * @c: caracter to encode
 *
 * Return: retuns the caracter encoded
 */
char *leet(char *c)
{
	int a[] = {65, 52};
	int e[] = {69, 51};
	int o[] = {79, 48};
	int t[] = {84, 55};
	int l[] = {76, 49};
	int j = 0;

	while (*(c + i) != '\0')
	{
		if ((*(c + i) == a[0]) || (*(c + i) == (a[0] + 32)))
		{
			*(c + i) = a[1];
		}
		if ((*(c + i) == e[0]) || (*(c + i) == (e[0] + 32)))
		{
			*(c + i) = e[1];
		}
		if ((*(c + i) == o[0]) || (*(c + i) == (o[0] + 32)))
		{
			*(c + i) = o[1];
		}
		if ((*(c + i) == t[0]) || (*(c + i) == (t[0] + 32)))
		{
			*(c + i) = t[1];
		}
		if ((*(c + i) == l[0]) || (*(c + i) == (l[0] + 32)))
		{
			*(c + i) = l[1];
		}
	}
}
