#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node_1 - creates a binary tree node
 * @parent: parent of the node
 * @value: value to store in the new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node_1(binary_tree_t *parent, int value)
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

/**
 * binary_tree_insert_left - inserts a node as the left-child of another
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left_child;
if (parent == NULL)
return (NULL);
left_child = binary_tree_node_1(parent, value);
if (left_child == NULL)
return (NULL);
left_child->left = parent->left;
if (left_child->left != NULL)
left_child->left->parent = left_child;
parent->left = left_child;
return (left_child);
}
