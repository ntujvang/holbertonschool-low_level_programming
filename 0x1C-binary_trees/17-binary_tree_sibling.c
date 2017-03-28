#include "binary_trees.h"
/**
 * binary_tree_sibling - finding a node sibling
 * @node: the node
 * Return: the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	temp = node->parent;
	if (temp->left == NULL)
		return (NULL);
	if (temp->right == NULL)
		return (NULL);
	if (temp->left->n == node->n)
		return (temp->right);
	return (temp->left);
}
