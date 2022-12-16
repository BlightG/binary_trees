#include "binary_trees.h"

/**
 * binary_tree_balance - function to measure the balance factor of
 * a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance
 * factor.
 *
 * Return: balance factor of a binary tree or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}

/**
 * binary_tree_height - functino to get the height of the tree.
 *
 * @tree: tree to be checked.
 *
 * Return: height of the tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;

	return ((height_left >= height_right) ? height_left : height_right);
}

/**
 * binary_tree_is_perfect - function to check if a
 * given binary tree is perfect.
 *
 * @tree: pointer to the root node of the tree to be checked.
 *
 * Return: 1 if tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect_right = 0, perfect_left = 0;

	if (!tree || binary_tree_balance(tree) != 0)
		return (0);

	if (!tree->left && !tree->right)
		return (1);


	perfect_left = binary_tree_is_perfect(tree->left);
	perfect_right = binary_tree_is_perfect(tree->right);

	return ((perfect_left == 0 || perfect_right == 0) ? 0 : 1);
}
