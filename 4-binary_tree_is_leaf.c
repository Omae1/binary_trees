#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Che leaf of a binary tree.
 * @node: A pointer to the n
 * Return: If
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
