#include "binary_trees.h"
/**
 * bin_tree_depth - a function that can return depth of a tree
 *
 * @tree: node of tree to check the depth
 *
 * Return: depth of the tree starting from @tree to the root
*/
size_t bin_tree_depth(const binary_tree_t *tree);
size_t bin_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	/* checks if @tree is NULL */
	if (!tree)
		return (0);

	if (tree->parent != NULL)
		tree_depth = bin_tree_depth(tree->parent) + 1;

	return (tree_depth);
}

/**
 * match_depth_diff - a function to makethe depth b/n two nodes is the same
 *
 * @temp_1: first node to have depth adjusted
 * @temp_2: second node to have depth adjusted
*/
void match_depth_diff(binary_tree_t **, binary_tree_t **);
void match_depth_diff(binary_tree_t **first, binary_tree_t **second)
{
	binary_tree_t *temp_1, *temp_2;
	size_t first_depth, second_depth;
	int depth_diff, i = 0;

	temp_1 = *first;
	temp_2 = *second;
	first_depth = (int) bin_tree_depth(temp_1);
	second_depth = (int) bin_tree_depth(temp_2);
	depth_diff = first_depth - second_depth;

	/* if the depth_diff is postive move temp_1 back until both are same level */
	/* if it is negative do the opposite */
	if (depth_diff > 0)
	{
		i = depth_diff;
		while (i > 0)
		{
			temp_1 = temp_1->parent;
			i--;
		}
	}
	else if (depth_diff < 0)
	{
		i = depth_diff * -1;
		while (i > 0)
		{
			temp_2 = temp_2->parent;
			i--;
		}
	}

	/* set the pointer at the inital adress to the new adress */
	*first = temp_1;
	*second = temp_2;
}
/**
 * binary_trees_ancestor - a funciton to find the least
 * 			   common ancestor of two nodes
 * @first: first node to compare
 * @second: second node to compare
 *
 * Return: returns a common ancestor or null
*/
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp_1, *temp_2;

	/* check first and seocnd are not NULL*/
	if (!first || !second)
		return (NULL);

	temp_1 = (binary_tree_t *) first;
	temp_2 = (binary_tree_t *) second;

	/* change the depth diff if it exists */
	match_depth_diff(&temp_1, &temp_2);

	/* check if first and second are same node */
	/* else check if they belong to the same parent*/
	/* else do a loop backwards in the tree */
	if (temp_1 == temp_2)
		return (temp_1);
	else if (temp_1->parent == temp_2->parent)
		return (temp_1->parent);

	while (temp_1->parent && temp_2->parent)
	{
		/* when you find a mathcing node stop looping back*/
		if (temp_1 == temp_2)
			return (temp_1);
		else if (temp_1->parent == temp_2->parent)
			return (temp_1->parent);
		temp_1 = temp_1->parent;
		temp_2 = temp_2->parent;
	}
	return (NULL);
}
