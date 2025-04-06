#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node as the right-child of a node
* @parent: Pointer to the parent node
* @value: Value to store in the new node
*
* Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	if (parent == NULL)
		return (NULL);

	my_node = malloc(sizeof(binary_tree_t));

	if (my_node == NULL)
		return (NULL);

	my_node->n = value;
	my_node->parent = parent;
	my_node->left = NULL;
	my_node->right = NULL;

	if (parent->right != NULL)
	{
		my_node->right = parent->right;
		parent->right->parent = my_node;
	}

	parent->right = my_node;
	return (my_node);
}
