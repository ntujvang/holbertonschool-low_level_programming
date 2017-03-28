#include "binary_trees.h"
/**
 * binary_tree_uncle - finding an uncle
 * @node: the node
 * Return: the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *dad, *grand;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	dad = node->parent;
	grand = dad->parent;
	if (grand->left == NULL)
		return (NULL);
	if (grand->right == NULL)
		return (NULL);
	if (grand->left->n == dad->n)
		return (grand->right);
	return (grand->left);
}
