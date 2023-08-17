#include "binary_trees.h"

/**
 * binary_tree_depth - Gets the depth of the given tree
 * @tree: The tree to traverse
 *
 * Return: The height of the tree, or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent != NULL)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}
