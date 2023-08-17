#include "binary_trees.h"

/**
 * binary_tree_postorder - Uses postorder to traverse given tree
 * @tree: The tree to traverse
 * @func: Function pointer
 *
 * Return: No return value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
