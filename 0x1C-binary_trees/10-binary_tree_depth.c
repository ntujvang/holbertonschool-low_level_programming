#include "binary_trees.h"
/**
 * binary_tree_depth - finding the depth of a tree
 * @node: node to check depth for
 * Return: the depth of that node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth;

	depth = -1;
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (depth + 1);
	depth = binary_tree_depth(node->parent);
	return (depth + 1);
}
