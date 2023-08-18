#include "binary_trees.h"

/**
 * binary_tree_sibling - Checs if the node has any siblings
 * @tree: The tree to traverse
 *
 * Return: A pointer to the sibling node, or NULL
 */
binary_tree_t binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->left != node)
		return (node->parent->left);
	if (node->parent->right != NULL && node->parent->right != node)
		return (node->parent->right);
	return (NULL);
}
