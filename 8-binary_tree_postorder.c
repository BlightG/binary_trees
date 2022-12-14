#include "binary_trees.h"
/**
 * binary_tree_postorder - prints a binary tree in a postorder Sequence
 * 
 * @tree: root node for a tree
 * @func: pointer to a function that prints a node from binary tree
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
        func(tree->n);
}
