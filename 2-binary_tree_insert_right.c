#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a nhe right-child
 *                            of anotherary tree.
 * @parent: A pointer to the node to insd in.
 * @value: The value to sto node.
 *
 * Return: If parent is NULcurs - NULL.
 *         Otheinter to the new node.
 *
 * Description:  a right-child, the new node
 *              te old right-child is set as
 *              tthe new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
