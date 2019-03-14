#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 *
 * @node: the node to be checked
 *
 * Return: 1 if leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);

	return (1);
}
