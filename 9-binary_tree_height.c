#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t w = 0;
	size_t k = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			w = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			k = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((w > k) ? w : k);
	}
}
