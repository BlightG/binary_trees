#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserte a new_node to the right
 *                           of a binary tree partent
 *
 * @parent: an root for the new_node
 * @value: int value to be stored on right node of @parent node
 *
 * Return: pointer to new_node or NULL in case of Failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	new_node = binary_tree_node(parent, value);
	/* return NULL if binary_tree_node function fails*/
	if (!new_node)
		return (NULL);
	/**
	 * if parent has right element move it to new_node->right
	 * and make parent->right equal to new_node
	*/
	if (parent->right != NULL)
	{
		temp = parent->right;
		new_node->right = temp;
	}

	parent->right = new_node;
	return (new_node);
}
