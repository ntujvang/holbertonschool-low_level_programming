#ifndef LISTS_H
#define LISTS_H
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* stdout */
int _putchar(char c);
/* ex 0 */
size_t print_listint(const listint_t *h);
/* ex 1 */
size_t listint_len(const listint_t *h);
/* ex 2 */
listint_t *add_nodeint(listint_t **head, const int n);
#endif
