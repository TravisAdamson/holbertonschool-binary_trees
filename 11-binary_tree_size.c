#include "binary_trees.h"

/**
 * binary_tree_size - Gets the size of the given tree
 * @tree: The tree to traverse
 *
 * Return: The height of the tree, or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_s = 0, right_s = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		left_s = binary_tree_size(tree->left);
	if (tree->right != NULL)
		right_s = binary_tree_size(tree->right);
	if (left_s != 0 || right_s != 0)
		return (1 + left_s + right_s);
	return (0);
}
