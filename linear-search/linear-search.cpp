#include "./linear-search.h"

LinearSearch::LinearSearch(std::vector<int> objects)
{
    this->objects = objects;
}

bool LinearSearch::run(int n)
{
    std::vector<int> a = this->objects;

    for(int i : a) 
        if (i == n) {
            return true;
        }
    
    return false;
}
