#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node
 * @head: pointer to list
 * @index: node we want
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = head;
	while (tmp != NULL && i < index)
	{
		i++;
		tmp = tmp->next;
	}
	if (index != i || head == NULL)
		return (NULL);
	return (tmp);
}
