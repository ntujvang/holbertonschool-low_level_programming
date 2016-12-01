#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at index
 * @head: points to the list
 * @index: area of list for new node to add
 * @n: the new number
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *tmp, *new;
	unsigned int i;

	if (*head == NULL && index != 0)
		return (NULL);
	i = 0;
	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (i < (index - 1) && tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if ((index - 1) != i)
		return (NULL);
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
