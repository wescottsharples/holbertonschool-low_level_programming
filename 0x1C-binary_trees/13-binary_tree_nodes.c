#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - finds the number of non-leaves in binary tree
 *
 * @tree: pointer to root node of the tree
 *
 * Return: number of non-leaves, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
