#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - Checs if the tree is perfect
 * @tree: The tree to traverse
 *
 * Return: The balance of the tree, or 0 if NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
