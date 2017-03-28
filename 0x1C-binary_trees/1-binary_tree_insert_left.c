#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert into binary tree, left side
 * @parent: parent node
 * @value: value to insert
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *hold;

	if (parent == NULL)
		return (NULL);
	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);
	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;
	if (parent->left == NULL)
		parent->left = temp;
	else
	{
		hold = parent->left;
		parent->left = temp;
		temp->left = hold;
		hold->parent = temp;
	}
	return (temp);
}
