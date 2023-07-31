#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - orint all elements of a list
 * @h: header of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
