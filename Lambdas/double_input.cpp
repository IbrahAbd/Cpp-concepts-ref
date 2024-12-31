#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {1, 2,3 ,4 ,5};

    std::vector<int> v3(v.size());

    transform(v.begin(), v.end(), v2.begin(), v3.begin(), [=](int x, int y) { return x*y;});

    for (int i : v3)
    {
        std::cout << i << " ";
    }
}