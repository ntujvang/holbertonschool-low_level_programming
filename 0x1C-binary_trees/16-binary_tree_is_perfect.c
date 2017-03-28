#include "binary_trees.h"
/**
 * tree_nodes - checking the nodes
 * @tree: the tree
 * Return: 0 or the value
 */
size_t tree_nodes(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (tree_nodes(tree->left) + tree_nodes(tree->right) + 1);
	return (0);
}

/**
 * tree_height - height of tree
 * @tree: the tree
 * Return: 0, -1 or left/right
 */
size_t tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree != NULL && (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree != NULL)
	{
		left = tree_height(tree->left);
		right = tree_height(tree->right);
		if (left > right)
			return (left + 1);
		return (right + 1);
	}
	return (-1);
}


/**
 * binary_tree_is_perfect - finding if a tree is perfect
 * @tree: the tree
 * Return: 0 for false, 1 for true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nodes, flag, i;

	flag = 1;
	if (tree == NULL)
		return (0);
	height = tree_height(tree);
	nodes = tree_nodes(tree);
	i = 0;
	while (i <= height)
	{
		flag *= 2;
		i++;
	}
	flag--;
	if (flag == nodes)
		return (0);
	return (1);
}
