#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of list
 * @h: pointer containing list
 * Return: the amount in list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
