#include "binary_trees.h"

/**
 * binary_tree_height - Gets the height of the given tree
 * @tree: The tree to traverse
 *
 * Return: The height of the tree, or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;
	if (tree != NULL)
	{
		if (tree->left)
			left_h = binary_tree_height(tree->left);
		if (tree->right)
			right_h = binary_tree_height(tree->right);
		return(1 + c_max(right_h, left_h));
	}
	else
		return(0);
}
