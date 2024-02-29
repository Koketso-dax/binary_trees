#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - will check if binary tree is perfect.
 * @tree: input tree address.
 * Return: 1 on true. 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	height = binary_tree_height(tree);

	return (binary_tree_is_full(tree) &&
			((size_t)1 << height) - 1 == binary_tree_size(tree));
}
/**
 * binary_tree_height - height helper func
 * @tree: input tree.
 * Return: Binary tree height. 0 on Null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ?
			(left_height + 1) : (right_height + 1));
}
/**
 * binary_tree_is_full - recursively determines if tree is full.
 * @tree: input tree.
 * Return: 0 or 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	}
	return (0);
}
/**
 * binary_tree_size - determines size of binary tree.
 * @tree: input tree.
 * Return: Tree size or 0 on NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
