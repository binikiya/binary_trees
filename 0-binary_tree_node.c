#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: a pointer node of the node to create
 * @value: the value put in the new node
 * Return: a pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);
new_node->parent = parent;
new_node->n = value;
new_node->left = new_node->right = NULL;
return (new_node);
}
