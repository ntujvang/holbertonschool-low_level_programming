#include "hash_tables.h"
/**
 * hash_djb2 - algorithm for hash tables
 * @str: string
 * Return: the hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
