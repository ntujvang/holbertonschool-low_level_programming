#include <stdio.h>
#include "lists.h"
/**
 * listint_len - finding the num of elements in list
 * @h: the list
 * Return: i (elements in list)
 */
size_t listint_len(const listint_t *h)
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
