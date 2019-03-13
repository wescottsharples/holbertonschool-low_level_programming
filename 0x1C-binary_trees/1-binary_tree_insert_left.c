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
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}
	else
		parent->left = node;

	return (node);
}
