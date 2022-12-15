#include "binary_trees.h"
/**
 * binary_tree_height - a function that can return height of a tree
 *
 * @tree: node to calculates height from
 *
 * Return: height of tree starting from @tree to the furthest leaf
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_conut_left = 0;
	size_t height_conut_right = 0;

	/* check if node is NULL*/
	if (!tree)
		return (0);

	/*printf("%d\n", tree->n);*/

	/* if there is a left node add 1 to height _count_left*/
	/* else if there is right node add 1 to height_count_right*/
	if (tree->left || tree->right)
	{
		height_conut_left = binary_tree_height(tree->left) + 1;
		height_conut_right = binary_tree_height(tree->right) + 1;
	}

	/* return the biggest between the right and left count */
	if (height_conut_left > height_conut_right)
		return (height_conut_left);
	else
		return (height_conut_right);
}
