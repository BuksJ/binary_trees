#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: Counts
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, w = 0, k = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		w = binary_tree_leaves(tree->left);
		k = binary_tree_leaves(tree->right);
		leaf = w + k;
		return ((!w && !k) ? leaf + 1 : leaf + 0);
	}
}
