#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - prints the len of a list
 * @h: the list to print number of element for
 *
 * Return: returns the number of element in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
