#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree
 * @parent: the parent node
 * @value: value to insert
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;
	return (temp);

}
