#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - count number of elements of a list
 * @h: header of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
