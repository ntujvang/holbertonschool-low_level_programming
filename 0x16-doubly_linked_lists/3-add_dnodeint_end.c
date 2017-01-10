#include "lists.h"
/**
 * add_dnodeint_end - add a node to the end of list
 * @head: pointer to the head
 * @n: value of node
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	new = *head;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (new->next != NULL)
		new = new->next;
	new->next = temp;
	temp->prev = new;
	return (temp);
}
