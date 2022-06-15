#include "./dataset.h"

std::vector<int> Dataset::generate()
{
    std::vector<int> vec(DATASET_SIZE);
    std::iota (begin(vec), end(vec), 0);

    return vec;
}
