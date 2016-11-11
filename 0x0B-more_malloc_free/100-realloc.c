#include "holberton.h"
#include <stdlib.h>
/**
 * *_realloc - moving a pointer to a pointer of malloc
 * @ptr: given pointer
 * @old_size: size of pointer
 * @new_size: new size of pointer
 * Return: pointer to the new alloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *tmp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		tmp = malloc(new_size);
		if (tmp == NULL)
			return (NULL);
		return (tmp);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	tmp = ptr;
	for (i = 0; i < old_size; i++)
		s[i] = tmp[i];
	free(ptr);
	return (s);
}
