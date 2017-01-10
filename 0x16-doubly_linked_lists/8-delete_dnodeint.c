#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete node at index
 * @head: pointer to list
 * @index: position to delete
 * Return: 1 for success, -1 for fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *hold;

	i = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == i)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < (index - 1))
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (-1);
	}
	hold = temp;
	hold = hold->next;
	temp->next = hold->next;
	temp->prev = hold->prev;
	free(hold);
	return (1);
}
