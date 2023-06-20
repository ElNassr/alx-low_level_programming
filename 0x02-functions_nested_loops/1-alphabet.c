#include <stdio.h>
#include "main.h"

/**
* main - entry point
*
* Return: 0 on success
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
