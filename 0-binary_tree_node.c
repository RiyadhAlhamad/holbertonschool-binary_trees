#include "binary_trees.h"

/**
*binary_tree_node - Creates a new binary tree node
*@parent: Pointer to the parent node
*@value: Value to assign to the new node
*
*Return: Pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *my_node = malloc(sizeof(binary_tree_t));

	if (my_node == NULL)
		return (NULL);

	my_node->n = value;
	my_node->parent = parent;
	my_node->left = NULL;
	my_node->right = NULL;

	return (my_node);
}
