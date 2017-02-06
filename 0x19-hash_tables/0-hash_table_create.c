#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: Null if fail else pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *my_table;

	i = 0;
	if (size < 1)
		return (NULL);
	my_table = malloc(sizeof(hash_table_t));
	if (my_table == NULL)
		return (NULL);
	my_table->array = malloc(sizeof(hash_node_t));
	if (my_table->array == NULL)
		return (NULL);
	while (i < size)
	{
		my_table->array[i] = NULL;
		i++;
	}
	my_table->size = size;
	return (my_table);
}
