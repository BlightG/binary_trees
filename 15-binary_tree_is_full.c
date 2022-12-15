#include "binary_trees.h"
/**
 * 
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
        int left_check, right_check;
        /* if tree is NULL return 0 */
        if (!tree)
                return (0);

        /* check subtrees if they are full*/
	if (tree->left)
        	left_check = binary_tree_is_full(tree->left);
        if (tree->right)
		right_check = binary_tree_is_full(tree->right);

        
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
        else
                return (0);
}