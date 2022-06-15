#include <string>
#include <vector>

class BinarySearch
{
    private:
        std::vector<int> objects;
    public:
        BinarySearch(std::vector<int> objects);
        bool run(int n);
};
