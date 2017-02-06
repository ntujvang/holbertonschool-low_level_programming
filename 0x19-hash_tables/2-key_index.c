#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array
 * Return: key/value pair on hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	hash = hash % size;
	return (hash);
}
