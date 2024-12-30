#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> v = {1, 2, 3, 4, 5};

    v.push_back(6);     // Adds an element to the end of the vector.
    v.pop_back();       // Removes the last element of the vector.

    v.insert(v.begin() + 2, 10); // Inserts an element at the specified position in the vector.
    v.erase(v.begin() + 2);      // Removes an element at the specified position in the vector.


    v.resize(10);   // Resizes the vector to the specified number of elements.


    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.clear(); // Removes all elements from the vector.
}
