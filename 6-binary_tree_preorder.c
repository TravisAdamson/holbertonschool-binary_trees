#include "binary_trees.h"

/**
 * binary_tree_preorder - Uses preorder to traverse given tree
 * @tree: The tree to traverse
 * @func: Function pointer
 *
 * Return: No return value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
