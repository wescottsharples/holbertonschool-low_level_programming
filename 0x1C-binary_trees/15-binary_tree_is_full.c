#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks for full binary tree
 *
 * @tree: pointer to root node of tree
 *
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		return (1);

	return (0);
}
