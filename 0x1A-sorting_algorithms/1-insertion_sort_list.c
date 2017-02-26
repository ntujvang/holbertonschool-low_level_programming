#include "sort.h"
/**
 * swap - function that swaps elements of a linked list
 * @left: left node
 * @right: right node
 * Return: void
 */
void swap(listint_t *left, listint_t *right)
{
	if (left->prev != NULL)
		(left->prev)->next = right;
	if (right->next != NULL)
		(right->next)->prev = left;
	right->prev = left->prev;
	left->next = right->next;
	right->next = left;
	left->prev = right;
}

/**
 * list_len - finds the length of a linked list
 * @list: pointer to the list
 * Return: length of list
 */
size_t list_len(const listint_t *list)
{
	size_t i;

	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}

/**
 * get_node_info - function to obtain the information at a node
 * @list: the list
 * @index: the node index wanted
 * Return: the node index
 */
listint_t *get_node_info(listint_t *list, size_t index)
{
	size_t i;

	if (list == NULL)
		return (NULL);
	i = 0;
	while (i < index)
	{
		list = list->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (list);
}

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: the list to be sorted
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	size_t len, value, hole;
	listint_t *temp;

	if (*list == NULL)
		return;
	len = list_len(*list);
	if (len <= 1)
		return;
	value = 0;
	while (value < len)
	{
		temp = get_node_info(*list, value);
		hole = value;
		while (hole > 0 && (temp->prev)->n > temp->n)
		{
			swap(temp->prev, temp);
			hole--;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
		}
		value++;
	}
}
