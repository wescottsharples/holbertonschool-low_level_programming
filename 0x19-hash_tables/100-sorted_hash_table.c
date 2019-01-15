#include <stlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: Pointer to newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	if (size > 0)
	{
		sht = malloc(sizeof(shash_table_t));
		if (sht == NULL)
			return (NULL);

		sht->array = malloc(sizeof(shash_node_t) * size);
		if (sht->array == NULL)
		{
			free(sht);
			return (NULL);
		}

		for (i = 0; i < size; i++)
			sht->array[i] = NULL;
	}

	sht->shead = NULL;
	sht->stail = NULL;
	sht->size = size;

	return (sht);
}

/**
 * hashdllsort - sorts a hash table
 * @ht: hash table
 * @movnode: something
 *
 * Return: Nothing
 */
void hashdllsort(shash_table_t *ht, shash_node_t *movnode)
{
	(void)ht;
	(void)movnode;
}

/**
 * hashdllsort - sorts a hash table
 * @ht: hash table
 * @key: something
 * @value: something
 *
 * Return: Int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	(void)ht;
	(void)key;
	(void)value;
	return (1);
}

/**
 * shash_table_get - gives the index of a key
 * @ht: the key to be paired with index
 * @key: the size of the array of hash table
 *
 * Return: index at which key/value pair should be stored
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int i;

	i = key_index((const char *)key, ht->size;
	node = ht->array[i];
	while (node)
		if (strcmp(node->key, key) == 0)
			return (ptr->value);
	return (NULL);
}

/**
 * shash_table_print - print the key/value in order of appearance
 * @ht: the hash table to be printed
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			if (node)
				printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the key/value in order of appearance
 * @ht: the hash table to be printed
 *
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	(void)ht;
}


/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 *
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
