#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - finds number of leaves in binary tree
 *
 * @tree: pointer to the root node of tree
 *
 * Return: number of leaves, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
