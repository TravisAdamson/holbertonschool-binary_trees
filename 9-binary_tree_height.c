#include "binary_trees.h"

/**
 * binary_tree_height - Gets the height of the given tree
 * @tree: The tree to traverse
 *
 * Return: The height of the tree, or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree != NULL)
	{
		height = 1 + stdlib_max(binary_tree_height(tree->left), binary_tree_height(tree->right));
		return (height);
	}
	else
		return (0);
}