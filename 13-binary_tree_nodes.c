#include "binary_trees.h"
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
/**
 * binary_tree_nodes - counts number of nodes with at least 1 child.
 * @tree: input tree.
 * Return: Number of nodes with a child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - determines size of a binary tree
 * @tree: input tree
 * Return: size of the tree 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: input tree
 * Return: number of leaves 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
