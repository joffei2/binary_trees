#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Pointer to the node that will be the parent of the inserted node
 * @value: The value to put in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_node(parent, value);
	if (new_right == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}
	parent->right = new_right;
	return (new_right);
}

