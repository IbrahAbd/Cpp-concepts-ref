#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};

    std::vector<int> v2(v.size());


    transform(v.begin(), v.end(), v2.begin(), [](int n) { return n*3;});

    for (int i : v2)
    {
        cout << i << " ";
    }
}