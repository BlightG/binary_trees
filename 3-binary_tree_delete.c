#include "binary_trees.h"
/**
 * binary_tree_delete - deletes all nodes of a binary tree
 *
 * @tree: root node of binary tree to be cleand
*/
void binary_tree_delete(binary_tree_t *tree)
{
	/**
	 * check if @tree is a leaf
	 * if not go to left node check if it is a leaf
	 * if it is clear left node
	 * check right node after finishing left node subbranches
	 * after finishing with right node free tree
	*/

	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
