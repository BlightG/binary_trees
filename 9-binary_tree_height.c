#include "binary_trees.h"
/**
 * 
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t height_conut_left = 0;
        size_t height_conut_right = 0;

        /* check if node is NULL*/
        if (!tree)
                return (0);

        /* if there is a left node add 1 to height _count_left*/
        /* else if there is right node add 1 to height_count_right*/
        if (tree->left)
                height_conut_left++;
        else if (tree->right)
                height_conut_right++;

        /* recusrivly add to height_count_left or height_count_right */
        height_conut_left += binary_tree_height(tree->left);
        height_conut_right += binary_tree_height(tree->right);

        /* return the biggest between the right and left count */
        if (height_conut_left > height_conut_right)
                return (height_conut_left);
        else 
                return (height_conut_right);
}
