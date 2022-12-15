#include "binary_trees.h"
/**
 * binary_tree_preorder - prints a binary tree in a preorder Sequence
 *
 * @tree: root node for a tree
 * @func: pointer to a function that prints a node from binary tree
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
