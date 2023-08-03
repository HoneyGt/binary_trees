#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: node to check
 * Return: if a node is a root - 1
 * otherwise - 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (1);
}
