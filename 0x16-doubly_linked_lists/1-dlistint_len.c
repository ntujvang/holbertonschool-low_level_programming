#include "lists.h"
/**
 * dlistint_len - function to return number of elements
 * @h: pointer to the start of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
