#include "binary_trees.h"
/**
 * binary_tree_nodes - counts number of nodes with at least 1 child.
 * @tree: input tree.
 * Return: Number of nodes with a child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1);
	}

	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes);
}