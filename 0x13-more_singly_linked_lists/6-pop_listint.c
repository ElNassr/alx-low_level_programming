#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of list
 * @head: pointer to head
 *
 * return: the head nodes data
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		i = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (i);

}
