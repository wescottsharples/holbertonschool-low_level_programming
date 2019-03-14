#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root of tree
 *
 * @node: the node to be checked
 *
 * Return: 1 if root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
