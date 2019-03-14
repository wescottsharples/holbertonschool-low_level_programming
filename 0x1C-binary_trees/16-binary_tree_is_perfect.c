#include <stdlib.h>
#include "binary_trees.h"

/**
 * height - recursively finds the height of a binary tree
 *
 * @tree: pointer to the root node of binary tree
 *
 * Return: the height of the binary tree
 */
size_t height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (max(height(tree->left) + 1, height(tree->right) + 1));
}

/**
 * max - returns the maximum of two unsigned ints
 *
 * @a: the first unsigned int
 * @b: the second unsigned int
 *
 * Return: the maximum of two unsigned ints
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

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

/**
 * binary_tree_is_perfect - checks for perfect binary tree
 *
 * @tree: pointer to root node of tree
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t nodes, exp;

	if (!tree)
		return (0);

	for (nodes = 1; nodes < height(tree); nodes++)
		exp = 2 * exp;

	if (binary_tree_leaves(tree) == exp)
		return (1);

	return (0);
}
