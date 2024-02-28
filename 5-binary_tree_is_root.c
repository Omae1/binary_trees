#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks ifry tree.
 * @node: A pointerto check.
 *
 * Return: If the node  - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
