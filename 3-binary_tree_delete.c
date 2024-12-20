#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire tree
 * @tree: root node of tree to be deleted
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
