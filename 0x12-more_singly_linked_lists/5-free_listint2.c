#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointer to the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
