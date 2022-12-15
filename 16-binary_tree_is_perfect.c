#include "binary_trees.h"
/**
 * tree_height - a function that can return height of a tree
 *
 * @tree: node to calculates height from
 *
 * Return: height of tree starting from @tree to the furthest leaf
*/
int tree_height(const binary_tree_t *tree);
int tree_height(const binary_tree_t *tree)
{
        int height_conut_left = 0;
        int height_conut_right = 0;

        /* check if node is NULL*/
        if (!tree)
                return (0);

        /*printf("%d\n", tree->n);*/

        /* if there is a left node add 1 to height _count_left*/
        /* else if there is right node add 1 to height_count_right*/
        if (tree->left || tree->right)
        {
                height_conut_left = tree_height(tree->left) + 1;
                height_conut_right = tree_height(tree->right) + 1;
        }

        /* return the biggest between the right and left count */
        if (height_conut_left > height_conut_right)
                return (height_conut_left);
        else
                return (height_conut_right);
}
/**
 * tree_is_full - checks if a binary tree is full
 *
 * @tree: root Node of binary tree
 *
 * Return: 1 if binary tree is full or 0 tree is not full or NULL
*/
int tree_is_full(const binary_tree_t *tree);
int tree_is_full(const binary_tree_t *tree)
{
        int left_check, right_check;
        /* if tree is NULL return 0 */
        if (!tree)
                return (0);

        /* check subtrees if they are full*/
	if (tree->left)
        	left_check = tree_is_full(tree->left);
        if (tree->right)
		right_check = tree_is_full(tree->right);


        /* if subtree is not full return 0 */
        if (left_check == 0 || right_check == 0)
                return (0);

        /**
         * check if node has left and right nodes
         * if either is missing return 0
         * if both are missing return 1
        */
        if (tree->left != NULL && tree->right != NULL)
                return (1);
        else if (tree->left == NULL && tree->right == NULL)
                return (1);

        return (0);
}
/**
 * binary_tree_is_perfect - checks if abinary tree has a 0 balance factor
 * 
 * @tree: root node of binary tree
 * 
 * Return: return 1 if tree is perfect else return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        int left_node_count, right_node_count, balance_factor;

	left_node_count = right_node_count = balance_factor = 0;
        /* if tree is NULL return 0*/
        if (!tree)
                return (0);

	/* check if tree is full */
	if (tree_is_full(tree) != 1)
		return (0);

        /**
	 * if @tree node has left element get its height and add one
	 * to acount for the height between @tree and @tree->left
	 * and do same for @tree->right
	 */
	if (tree->left)
        	left_node_count = tree_height(tree->left) + 1;
	if (tree->right)
        	right_node_count = tree_height(tree->right) + 1;

        /* the difrence of right and left height gives balance factor */
        balance_factor = left_node_count - right_node_count;

	/* return 1 if @balance_factor is 0 else return 1*/
	if (balance_factor == 0)
		return (1);
	return(0);
}