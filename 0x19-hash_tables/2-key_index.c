#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key to be paired with index
 * @size: the size of the array of hash table
 *
 * Return: index at which key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;
	return (idx);
}
