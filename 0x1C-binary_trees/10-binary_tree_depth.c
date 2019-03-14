#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of node in binary tree
 *
 * @tree: pointer to the node to find depth of
 *
 * Return: depth of node, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
