#include <string>
#include <vector>

class LinearSearch
{
    private:
        std::vector<int> objects;
    public:
        LinearSearch(std::vector<int> objects);
        bool run(int n);
};
