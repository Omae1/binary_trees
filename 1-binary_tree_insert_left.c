#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node ase.
 * @parent: A poinnsert the left-child in.
 * @value: The value to store i
 * Return: If parent is NULL
 * Description: If parenalready has a l
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
