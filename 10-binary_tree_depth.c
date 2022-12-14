#include "binary_trees.h"
/**
 * binary_tree_depth - a function that can return depth of a tree
 * 
 * @tree: node of tree to check the depth
 * 
 * Return: depth of the tree starting from @tree to the root
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
        size_t tree_depth = 0;

        /* checks if @tree is NULL */
        if (!tree)
                return (0);

        if (tree->parent != NULL)
                tree_depth = binary_tree_depth(tree->parent) + 1;

        return (tree_depth);
}
