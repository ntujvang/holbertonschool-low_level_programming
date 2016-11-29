#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in list
 * @h: the lsit
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
