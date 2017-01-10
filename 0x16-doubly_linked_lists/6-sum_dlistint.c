#include "lists.h"
/**
 * sum_dlistint - sum the list up
 * @head: pointer to the list
 * Return: the sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
