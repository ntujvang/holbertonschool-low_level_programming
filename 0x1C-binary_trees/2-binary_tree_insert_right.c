#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserting to a tree, right side!
 * @parent: parent node
 * @value: value to insert
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *hold;

	if (parent == NULL)
		return (NULL);
	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;
	if (parent->right == NULL)
		parent->right = temp;
	else
	{
		hold = parent->right;
		parent->right = temp;
		temp->right = hold;
		hold->parent = temp;
	}
	return (temp);
}
