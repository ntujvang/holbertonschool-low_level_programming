#include "lists.h"
/**
 * insert_dnodeint_at_index - function to insert node at index
 * @h: pointer to the node
 * @idx: index
 * @n: value to insert
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new, *tail;
	unsigned int i;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	i = 0;
	temp = *h;
	if (temp == NULL)
	{
		*h = new;
		return (new);
	}
	while (i < (idx - 1) && temp != NULL)
	{
		i++;
		temp = temp->next;
		tail = temp;
	}
	if ((idx - 1) != i)
	{
		free(new);
		return (NULL);
	}
	if (idx == i)
	{
		new->next = tail->next;
		new->prev = tail->prev;
		tail->next = new;
	}
	else
		return (NULL);
	return (new);
}
