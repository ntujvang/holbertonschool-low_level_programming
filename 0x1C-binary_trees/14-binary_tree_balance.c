#include "binary_trees.h"
/**
 * tree_height - height of the tree
 * @tree: the tree
 * Return: either left or right depending on size
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	if (left > right)
		return (left + 1);
	return (right + 1);
}


/**
 * binary_tree_balance - finding how balance a tree is
 * @tree: the tree
 * Return: left - right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	return (left - right);
}
