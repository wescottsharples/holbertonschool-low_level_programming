#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be added to
 * @key: key to be added
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node = NULL, *existing_node = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;

	idx = key_index((unsigned char *)key, ht->size);
	existing_node = ht->array[idx];
	new_node->next = existing_node;
	ht->array[idx] = new_node;

	return (1);
}
