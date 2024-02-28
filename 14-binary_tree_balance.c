# include "binary_trees.h"
/**
 * binary_tree_heights - height helper func
 * @tree: input tree.
 * Return: Binary tree height.
 */
size_t binary_tree_heights(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = binary_tree_heights(tree->left);
	size_t right_height = binary_tree_heights(tree->right);

	return ((left_height > right_height) ? (left_height + 1) : (right_height + 1));
}
/**
 * binary_tree_balance - determines if binary tree is balanced
 * @tree: tree to test
 * Return: 1 on true. 0 otherwise.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = binary_tree_heights(tree->left);
	size_t right_height = binary_tree_heights(tree->right);

	return ((int)(left_height - right_height));
}
