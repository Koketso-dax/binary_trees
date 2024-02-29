#include "binary_trees.h"
/**
 * binary_tree_height - determines the height on a binary tree.
 * @tree: address of root node.
 * Return: binary tree height or 0 if NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
	{
		return (0);
	}

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return ((left_h > right_h) ? (left_h + 1) : (right_h + 1));
}
