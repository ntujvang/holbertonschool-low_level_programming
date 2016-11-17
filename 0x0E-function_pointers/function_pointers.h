#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
int _putchar(char c);
/* stdout */
void print_name(char *name, void (*f)(char *));
/* ex 0 */
void array_iterator(int *array, size_t size, void (*action)(int));
/* ex 1 */
int int_index(int *array, int size, int (*cmp)(int));
/* ex 2 */
#endif
