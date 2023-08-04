#include "binary_trees.h"

/**
 * binary_trees__ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mama, *abba;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mama = first->parent, abba = second->parent;
	if (first == abba || !mama || (!mama->parent && abba))
		return (binary_trees_ancestor(first, abba));
	else if (mama == second || !abba || (!abba->parent && mama))
		return (binary_trees_ancestor(mama, second));
	return (binary_trees_ancestor(mama, abba));
}
