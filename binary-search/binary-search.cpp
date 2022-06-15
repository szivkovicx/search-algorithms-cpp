#include "./binary-search.h"

BinarySearch::BinarySearch(std::vector<int> objects)
{
    this->objects = objects;
}

bool BinarySearch::run(int n)
{
    std::vector<int> a = this->objects;

    int l = 0;
    int r = a.size();

    while (l < r)
    {
        int m = (l+r)/2;
        
        if (a[m] <= n)
        {
            l = m + 1;
        } else {
            r = m;
        }
    }

    return l > 0 && a[l - 1] == n;
}
