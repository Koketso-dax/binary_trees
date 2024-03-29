#include "binary_trees.h"
/**
 * binary_tree_is_root - will return 1  if node is a root & 0 otherwise.
 * @node: node to be checked.
 * Return: 1 if root. 0 otherwise.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return ((node->parent == NULL) ? 1 : 0);
}
