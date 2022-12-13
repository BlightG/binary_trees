#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserte a new_node to the left
 *                           of a binary tree partent
 *
 * @parent: an root for the new_node
 * @value: int value to be stored on left node of @parent node
 *
 * Return: pointer to new_node or NULL in case of Failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	new_node = binary_tree_node(parent, value);
	/* return NULL if binary_tree_node function fails*/
	if (!new_node)
		return (NULL);
	/**
	 * if parent has left element move it to new_node->left
	 * and make parent->left equal to new_node
	*/
	if (parent->left != NULL)
	{
		temp = parent->left;
		new_node->left = temp;
		temp->parent = new_node;
	}

	parent->left = new_node;
	return (new_node);
}
