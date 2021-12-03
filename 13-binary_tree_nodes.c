#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf 
 * @node: pointer to the node to check
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL && node->left == NULL && node->right == NULL)
return (1);
return (0);
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binar tree
 * @tree: pointer to the root node of the tree
 * Return: 1 or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left, right;
if (tree == NULL || binary_tree_is_leaf(tree))
return (0);
left = binary_tree_nodes(tree->left);
right = binary_tree_nodes(tree->right);
return (1 + left + right);
}
