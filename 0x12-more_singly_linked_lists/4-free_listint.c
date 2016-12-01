#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free-listint - free me!!
 * @head: pointer to the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	void *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
