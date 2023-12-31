#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Finds the balance of the given tree
 * @tree: The tree to traverse
 *
 * Return: The balance of the tree, or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0, balance = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		left_h = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_h = binary_tree_height(tree->right);
	balance = left_h - right_h;
	return (balance);
}
