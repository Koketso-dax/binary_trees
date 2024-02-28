#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through binary tree using in-order traversal.
 * @tree: target tree.
 * @func: input function.
*/
/**
 * If tree or func is NULL, do nothing.
 * Recursively traverse the left subtree.
 * Call the function for the current node.
 * Recursively traverse the right subtree.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)) {
    if (tree == NULL || func == NULL) {
        return;
    }

    binary_tree_inorder(tree->left, func);

    func(tree->n);

    binary_tree_inorder(tree->right, func);
}