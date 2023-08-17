#include "binary_trees.h"

/**
 * binary_tree_height - Gets the height of the given tree
 * @tree: The tree to traverse
 *
 * Return: The height of the tree, or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree != NULL)
	{
		left_h = binary_tree_height(tree->left);
		right_h = binary_tree_height(tree->right);
		return (1 + c_max(left_h, right_h));
	}
	else
		return (0);
}
