#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add a new node to the end
 * @head: head of node
 * @str: string to copy
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	tmp = tmp->next;
	return (tmp);
}
