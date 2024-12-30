#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    cout << vec.front() << endl; // Returns the first element of the vector.
    cout << vec.back() << endl;  // Returns the last element of the vector.

    cout << vec[3] << endl; // Returns the element at the specified position in the vector. Does not have bounds checking. Use if you are sure the index is within bounds.
    cout << vec.at(3) << endl; // Returns the element at the specified position in the vector. Has bounds checking. Will handle errors better.

    vec.data();  // Returns a pointer to the first element of the vector.
}
