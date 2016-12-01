#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deleteing the head node
 * @head: pointer to the list
 * Return: 0 or head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);
	tmp = *head;
	i = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (i);

}
