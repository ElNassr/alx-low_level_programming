#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: types of arg passed to the function
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i = 0;
	char *s;

	va_start(p, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(p, int));
			break;
		case 'i':
			printf("%d", va_arg(p, int));
			break;
		case 's':
			s = va_arg(p, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		case 'f':
			printf("%f", va_arg(p, float));
			break;
		default:
			i++;
			continue;
		}
	if (format[i + 1])
		printf(", ");
	i++;
	}
	printf("\n");
	va_end(p);
}
