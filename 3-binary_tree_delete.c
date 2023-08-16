#include "binary_trees.h"

/**
 * binary_tree_delete - Delete the entire given tree
 * @tree: The tree to delete
 *
 * Return: No Return Value
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree->left);
	free(tree->right);
	if (tree != NULL)
		free(tree);
}
