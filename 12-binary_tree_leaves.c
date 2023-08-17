#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves
 * @tree: The tree to traverse
 *
 * Return: The height of the tree, or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_l = 0, right_l = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		left_l = binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		right_l = binary_tree_leaves(tree->right);
	return (left_l + right_l);
}
