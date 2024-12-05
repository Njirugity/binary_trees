#include "binary_trees.h"

/**
 * binary_tree_balance - measuers the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
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
