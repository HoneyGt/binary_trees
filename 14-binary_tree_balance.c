#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factory of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0, otherwise balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_balance(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_height_balance - measures the height of a binary tree
 * @tree: binary tree
 * Return: height
 */
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height_balance(tree->right);
	return ((left > right) ? left : right);
}
