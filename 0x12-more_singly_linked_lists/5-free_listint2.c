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
	listint_t *tmp, *hold;

	if (head != NULL && *head != NULL)
	{
		hold = *head;
		while (hold != NULL)
		{
			tmp = hold;
			hold = hold->next;
			free(tmp);
		}
		*head = NULL;
	}
}
