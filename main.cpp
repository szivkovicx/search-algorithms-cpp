#include <iostream>
#include <cstdio>

// Algorithms
#include "./binary-search/binary-search.cpp"

// Dataset
#include "./dataset/dataset.cpp"

// Measurements
#include <chrono>
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::duration;
using std::chrono::milliseconds;

Dataset dataset;
std::vector<int> numbers = dataset.generate(); // { 0, 1 ... 999, 1000 }

int main(void)
{
    BinarySearch search(numbers);

    printf("Dataset size: %d elements\n\n", DATASET_SIZE);
    printf("Performance:\n");

    // Binary search
    auto t1 = high_resolution_clock::now();
    search.run(39450);
    auto t2 = high_resolution_clock::now();

    auto bin_s_measure = duration_cast<milliseconds>(t2 - t1).count();

    printf("Binary search: %lldms\n", bin_s_measure);

    return 0;
}
