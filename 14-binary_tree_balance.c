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
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (tree == NULL)
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left >= right)
return (1 + left);
return (1 + right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 1 or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;
if (tree == NULL)
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return (left - right);
}
