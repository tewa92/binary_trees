#include "binary_trees.h"

/**
 * binary_tree_node -To creates a new binary tree node.
 * @parent: Pointer to the parent of the node to create.
 * @value: Value to put in the new node.
 *
 * Return: Error occurs - NULL.
 *         Otherwise - Pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
