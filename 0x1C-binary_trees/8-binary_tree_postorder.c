#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traverses binary tree calling func
 *
 * @tree: the tree to be traversed
 * @func: pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
