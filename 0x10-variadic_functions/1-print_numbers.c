#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints the numbers
 * @separator : seperator between numbers
 * @n: number of numbers to print
 *
 * Return: No return for this function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if ( (separator != NULL) && (i != (n - 1)))
		{
			printf("%s ", separator);
		}
	}
	va_end(p);
	printf("\n");
}
