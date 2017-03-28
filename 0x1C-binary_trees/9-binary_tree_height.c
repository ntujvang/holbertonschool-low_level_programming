#include "binary_trees.h"
/**
 * binary_tree_height - find height of binary tree
 * @tree: tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftheight, rightheight;

	if (tree == NULL)
		return (-1);
	if (tree->left == NULL && tree->right == NULL && tree != NULL)
		return (0);
	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);
	if (leftheight > rightheight)
		return (leftheight + 1);
	return (rightheight + 1);

}
