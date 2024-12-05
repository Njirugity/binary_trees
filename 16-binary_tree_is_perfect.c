#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_size(tree);
	size_t perfect = (1 << height) - 1;

	return (size == perfect);
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node to measure the size
 * Return: 0 if tree is NULL
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left = 1 + binary_tree_height(tree->left);
	size_t right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	else
		return (right);
}
