#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: A pointer to the node to check
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node != NULL && node->parent == NULL)
return (1);
return (0);
}
