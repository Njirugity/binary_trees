#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as aleft child
 * @parent: root node
 * @value: value to be inserted
 * Return: NULL or pointer to the newnode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
