#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

/**
 * sum_them_all - variadic function to summ
 *                all parameters
 * @n: number of parameters
 *
 * Retunr: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int sum = 0;

	va_start (p, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg (p, int);
	}
	va_end (p);
	return (sum);
}
