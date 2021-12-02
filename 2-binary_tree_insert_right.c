#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node_2 - creates binary tree node
 * @parent: parents of the node to create
 * @value: value to store in new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node_2(binary_tree_t *parent, int value)
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
 * binary_tree_insert_right - inserts a node as the right-child of another
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: Pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *right_child;
if (parent == NULL)
return (NULL);
right_child = binary_tree_node_2(parent, value);
if (right_child == NULL)
return (NULL);
right_child->right = parent->right;
if (right_child->right != NULL)
right_child->right->parent = right_child;
parent->right = right_child;
return (right_child);
}
