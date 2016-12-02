#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete at the index
 * @head: pointer to list
 * @index: index to delete
 * Return: 1 for pass -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *hold;

	i = 0;
	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == i)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < (index - 1))
	{
		tmp = tmp->next;
		i++;
		if (tmp == NULL)
			return (-1);
	}
	hold = tmp;
	hold = hold->next;
	tmp->next = hold->next;
	free(hold);
	return (1);
}
