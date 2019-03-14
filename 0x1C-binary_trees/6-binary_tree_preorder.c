#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traverses binary tree calling func
 *
 * @tree: the tree to be traversed
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
