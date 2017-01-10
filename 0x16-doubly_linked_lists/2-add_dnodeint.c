#include "lists.h"
/**
 * add_dnodeint - add node to beginning of list
 * @head: pointer to the head
 * n: value of the node
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	*head = temp;
	return (temp);
}
