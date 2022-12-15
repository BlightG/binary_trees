#include "binary_trees.h"
/**
 * binary_tree_sibling - prints the sibling node of a binary tree node
 *
 * @node: node on a binary tree
 *
 * Return: pointer to sibling node or
 *         NULL if node is NULL, Parent is NULL or sibling doesnt exist
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	/* returns NULL if @node is NULL */
	if (!node)
		return (NULL);

	/* if node doesnt have parent node return NULL */
	if (!node->parent)
		return (NULL);

	/**
	* check if @node is left or right of parent
	* and if it is same  check if the other node
	* exists and if it does return the other node
	*/

	if (node->parent->left != node)
	{
		if (node->parent->left)
			return (node->parent->left);
	}
	else
	{
		if (node->parent->right)
			return (node->parent->right);
	}

	return (NULL);
}
