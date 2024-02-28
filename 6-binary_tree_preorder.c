#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using preorder traversal.
 * @tree: target tree to search
 * @func: function pointer function.
 */

/**
 * Algorithm:
 * If tree or func is NULL, do nothing
 * Call the function for the current node.
 * Recursively traverse the left subtree.
 * Recursively traverse the right subtree.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;  
    }

    func(tree->n);
    
    binary_tree_preorder(tree->left, func);

    binary_tree_preorder(tree->right, func);
}