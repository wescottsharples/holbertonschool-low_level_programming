#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree left node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: the value to insert in new node
 *
 * Return: pointer to new node on success, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent)
	{
		node->parent = parent;
		parent->left = node;
	}
	else
		parent = NULL;

	return (node);
}
