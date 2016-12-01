#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string -(malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* ex 0 */
size_t print_list(const list_t *h);
/* ex 1 */
size_t list_len(const list_t *h);
/* ex 2 */
list_t *add_node(list_t **head, const char *str);
/* ex 3 */
list_t *add_node_end(list_t **head, const char *str);
/* ex 4 */
void free_list(list_t *head);
/* bonus 1 */
void startUp (void) __attribute__ ((constructor));
#endif
