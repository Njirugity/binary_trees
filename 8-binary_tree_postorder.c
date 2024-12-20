#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse a tree using postorder traversal
 * @tree: pointer to the root of the node
 * @func: pointer to a functtion to call each node
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
