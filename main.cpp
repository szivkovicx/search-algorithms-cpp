#include <iostream>
#include <cstdio>

#define SAMPLE 39450

// Algorithms
#include "./binary-search/binary-search.cpp"
#include "./linear-search/linear-search.cpp"

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
    BinarySearch bin_s(numbers);
    LinearSearch lin_s(numbers);

    printf("Dataset size: %d elements\n\n", DATASET_SIZE);
    printf("Performance:\n");

    // Binary search
    auto bin_s_t1 = high_resolution_clock::now();
    bin_s.run(SAMPLE);
    auto bin_s_t2 = high_resolution_clock::now();

    auto bin_s_measure = duration_cast<milliseconds>(bin_s_t2 - bin_s_t1).count();

    printf("Binary search: %lldms\n", bin_s_measure);

    // Linear search
    auto lin_s_t1 = high_resolution_clock::now();
    lin_s.run(SAMPLE);
    auto lin_s_t2 = high_resolution_clock::now();

    auto lin_s_measure = duration_cast<milliseconds>(lin_s_t2 - lin_s_t1).count();

    printf("Linear search: %lldms\n", lin_s_measure);

    return 0;
}
