#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int w = 0, k = 0;

	if (tree->left && tree->right)
	{
		w = 1 + binary_tree_is_perfect(tree->left);
		k = 1 + binary_tree_is_perfect(tree->right);
		if (k == w && k != 0 && w != 0)
			return (k);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	{
		int result = 0;

		if (tree == NULL)
		{
			return (0);
		}
		else
		{
			result = binary_tree_is_perfect(tree);
			if (result != 0)
			{
				return (1);
			}
			return (0);
		}
	}
}
