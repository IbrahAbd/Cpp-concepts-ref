#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // 

using namespace std;

int main(void)
{
    std::vector<int> v= {5, 4, 3, 2, 1};

    std::sort(v.begin(), v.end()); // Sorts the elements in the vector.

    cout << v[0] << v[1] << v[2] << v[3] << v[4] << endl;

    std::reverse(v.begin(), v.end()); // Reverses the order of the elements in the vector.

    cout << v[0] << v[1] << v[2] << v[3] << v[4] << endl;
    
    std::find(v.begin(), v.end(), 3); // Searches for the element in the vector. Returns an iterator to the first element that matches the search criteria.

    cout << std::accumulate(v.begin(), v.end(), 0); // Returns the sum of all elements in the vector.
}

