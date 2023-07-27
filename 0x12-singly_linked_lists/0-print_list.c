#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print lists
 * @h: list to print
 *
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		n++;
		current = current->next;

	}
	return (n);
}
