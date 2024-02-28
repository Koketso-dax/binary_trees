#include "binary_trees.h"

/**
 * binary_tree_is_perfect - will check if binary tree is perfect.
 * @tree: input tree address.
 * Return: 1 on true. 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t height = binary_tree_height(tree);

	return (binary_tree_is_full(tree)
			&& (1 << height) - 1 == binary_tree_size(tree));
}
