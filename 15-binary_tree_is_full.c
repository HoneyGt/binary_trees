#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: binaru tree
 *
 * Return: 1 if it is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	return (1 * binary_tree_is_full(tree->left) *
			binary_tree_is_full(tree->right));
}
