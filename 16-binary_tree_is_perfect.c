#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, size;

	if (tree == NULL)
		return (0);

	h = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return (size == ((1 << (h + 1)) - 1));
}
