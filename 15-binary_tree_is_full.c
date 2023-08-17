#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checs if the tree is perfect
 * @tree: The tree to traverse
 *
 * Return: The balance of the tree, or 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_s = 0, right_s = 0;

	if (!tree)
		return (0);
	left_s = binary_tree_size(tree->left);
	right_s = binary_tree_size(tree->right);
	full = binary_tree_is_full(tree);
	if ((left_s == right_s) && (full == 1))
		return(1);
	return (0);
}
