#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class MultiplyBy3
{

public:
    int factor;

    MultiplyBy3(int factor) : factor(factor) {}

    int operator()(int n) const{
        return n * factor;
    }
};

int main()
{
    std::vector<int> v = {1 , 2 , 3 , 4 ,5};

    std::vector<int> v2 (v.size());
    MultiplyBy3 mult(3);

    transform(v.begin(), v.end(), v2.begin(), mult);

    for (int i : v2)
    {
        cout << i << " ";
    }

}

