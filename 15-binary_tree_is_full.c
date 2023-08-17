#include "binary_trees.h"

/**
 * binary_tree_is_full - Checs if the tree is full
 * @tree: The tree to traverse
 *
 * Return: The balance of the tree, or 0 if NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return(1);
	if (tree->left != NULL && tree->right != NULL)
		return(binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
