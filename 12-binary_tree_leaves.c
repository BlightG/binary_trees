#include "binary_trees.h"
/**
 * binary_tree_leaves - prints the number of leafs
 * 			starting from @tree node
 * 
 * @tree: node of tree to start counting from
 * 
 * Return: returns the number of leafs or 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	/* checks if tree is NULL */
	if (!tree)
		return (0);

	/* if a node is a leaf return 1*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* recusrivly check the left nodes until it reaches a leaf */
	if (tree->left)
		leaf_count += binary_tree_leaves(tree->left);

	/* recusrivly check the right nodes until it reaches a leaf */
	if (tree->right)
		leaf_count += binary_tree_leaves(tree->right);

	return (leaf_count);
}
