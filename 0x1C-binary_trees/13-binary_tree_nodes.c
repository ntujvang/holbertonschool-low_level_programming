#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: the tree
 * Return: the number of nodes with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (binary_tree_nodes(tree->left) + 1
		+ binary_tree_nodes(tree->right));
}
