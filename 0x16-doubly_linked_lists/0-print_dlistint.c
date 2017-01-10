#include "lists.h"
/**
 * print_dlistint - function to print the list
 * @h: pointer to the head of the list
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
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
