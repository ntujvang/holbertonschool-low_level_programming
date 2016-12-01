#include <stdio.h>
#include "lists.h"
/**
 * print_listint - printing the numbers
 * @h: location of the number
 * Return: the number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
