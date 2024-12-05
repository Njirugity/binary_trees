#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of node in a tree
 * @tree: pointer to the node to measure the depth
 * Return: depth
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	size_t depth = binary_tree_depth(tree->parent);

	return (1 + depth);
}
