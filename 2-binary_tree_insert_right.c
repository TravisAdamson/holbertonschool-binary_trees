#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert the node on the right
 * @parent: The parent to assign the node to
 * @value: The value to be stored in the node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp_node = NULL;

	if (parent == NULL)
		return (NULL);
	if (parent->right != NULL)
		temp_node = parent->right;
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (temp_node != NULL)
		new_node->right = temp_node;
	return (new_node);
}
