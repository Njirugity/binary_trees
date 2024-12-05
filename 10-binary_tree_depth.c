#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of node in a tree
 * @tree: pointer to the node to measure the depth
 * Return: depth
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	while (tree && tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
