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
/* ex 3 */
listint_t *add_nodeint_end(listint_t **head, const int n);
/* ex 4 */
void free_listint(listint_t *head);
/* ex 5 */
void free_listint2(listint_t **head);
/* ex 6 */
int pop_listint(listint_t **head);
/* ex 7 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* ex 8 */
int sum_listint(listint_t *head);
/* ex 9 */
listint_t *insert_nodeint_at_index
(listint_t **head, unsigned int index, int n);
/* ex 10 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
/* ex 11 */
listint_t *reverse_listint(listint_t **head);
#endif
