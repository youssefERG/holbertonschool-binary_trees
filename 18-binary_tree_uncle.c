binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);

    return (binary_tree_sibling(node->parent));
}
