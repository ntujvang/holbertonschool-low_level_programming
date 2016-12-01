#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum up the list
 * @head: pointer to the list
 * Return: the sum!
 */
int sum_listint(listint_t *head)
{
	int sum;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
