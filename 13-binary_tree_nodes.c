#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with atleast a child
 * @tree: pointer to the root node of the tree
 * Return: o or number of nodes with a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (tree == NULL)
		return (0);
	left_node = binary_tree_nodes(tree->right);
	right_node = binary_tree_nodes(tree->left);
	if (tree->left || tree->right)
		return (1 + left_node + right_node);
	return (0);
}
