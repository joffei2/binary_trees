#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree 
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0;
	size_t y = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((x > y) ? x : y);
	}
}
