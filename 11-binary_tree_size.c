#include "binary_trees.h"
/**
 *
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t node_count = 1;

	if (!tree)
		return (0);

	/**
	 * recusivly add one for each node
	 * on the left and right if they exist
	*/

	if (tree->left)
		node_count += binary_tree_size(tree->left);
	if (tree->right)
		node_count += binary_tree_size(tree->right);

	/* returns the combined count */
	return (node_count);
}
