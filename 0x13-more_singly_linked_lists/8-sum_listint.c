#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of listint_t
 * @head: pointer to the head of the list.
 *
 * Return: sum of all the data (n) of the list.
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
