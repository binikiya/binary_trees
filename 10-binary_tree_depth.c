#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 1 or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
return (count);
while (tree->parent != NULL)
{
count++;
tree = tree->parent;
}
return (count);
}
