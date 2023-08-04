#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of node in a binary tree
 * @node: a pointer to the node to find the sibling
 * Return: If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	else if (node->parent->left)
		return (node->parent->left);
	else
		return (NULL);
}
