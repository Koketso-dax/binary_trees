#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the depth of each node in a binary tree.
 * @tree: address of root node.
 * Return: size of tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t depth = 0;

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
