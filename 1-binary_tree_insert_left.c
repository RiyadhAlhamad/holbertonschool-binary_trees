#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node as the left-child of a node
* @parent: Pointer to the parent node
* @value: Value to store in the new node
*
* Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	if (parent == NULL)
		return (NULL);

	my_node = malloc(sizeof(binary_tree_t);
	
	if (my_node == NULL)
		return (NULL);
	
	my_node->n = value;
	my_node->parent = parent;
	my_node->left = NULL;
	my_node->right = NULL;

	if (parent->left != NULL)
	{
		my_node->left = parent->left;
		parent->left->parent = my_node;
	}

	parent->left = my_node;

	return (my_node);
}
