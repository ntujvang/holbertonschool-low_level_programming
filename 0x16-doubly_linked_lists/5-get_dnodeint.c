#include "lists.h"
/**
 * get_dnodeint_at_index - function to return nth node of list
 * @head: pointer to the list
 * @index: the node we want
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	temp = head;
	while (temp != NULL && i < index)
	{
		i++;
		temp = temp->next;
	}
	if (index != i || head == NULL)
		return (NULL);
	return (temp);
}
