int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t h, size, expected;

    if (!tree)
        return (0);

    h = binary_tree_height(tree);
    size = binary_tree_size(tree);
    expected = (1 << (h + 1)) - 1;

    return (size == expected);
}
