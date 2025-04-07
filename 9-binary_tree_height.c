#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: Height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;
	size_t max_height;
	
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		max_height = l_height;
	else
		max_height = r_height;

	return (max_height + 1);
}
