#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverse it!
 * @head: pointer to list
 * Return: pointer to the first node of reverse!
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *hold;

	tmp = *head;
	while (tmp->next != NULL)
	{
		hold = tmp->next;
		tmp->next = hold->next;
		hold->next = *head;
		*head = hold;
	}
	return (*head);
}
