#include"binary_trees.h"
/**
 * binary_tree_inorder - traverses a tree using in_order
 * @tree: tree to be traversed
 * @func: pointer to a function to call each node
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
