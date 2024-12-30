#include <iostream>
#include  <list>  // Have to include <list> not <vector>
using namespace std;

int main(void)
{
    list<int> v = {1, 2, 3, 4, 5, 5, 5};

    // ----------------------------------------------------------------------------

    // Lists are bi-directional, so they can push_front and push_back.
    //  **Vector can only push_back**
    v.push_front(6);     
    v.push_back(6);     

    // Lists can also pop_front and pop_back.
    // **Vector can only pop_back**

    v.pop_front();       // Removes the first element of the list.
    v.pop_back();       // Removes the last element of the list.

    // Cannot access element at a specific index like vectors.
    // **Vector can access elements at a specific index**

    // ----------------------------------------------------------------------------

    // v[3];  This will not work.
    // v.at(3);  This will not work.
    // Can only access elements using iterators.

    // ----------------------------------------------------------------------------

    // Removes all elements of value 3 from the list.
    v.remove(3);

    // Removes all elements that satisfy the condition.
    v.remove_if([](int x){return x > 3;});

    // ----------------------------------------------------------------------------

    // Build in unique method into library.
    v.unique();

    // ----------------------------------------------------------------------------

    // insert and erase methods are similar to vectors.
    v.insert(v.begin(), 10); // Inserts an element at the specified position in the vector.
    v.erase(v.begin());      // Removes an element at the specified position in the vector.

    // ----------------------------------------------------------------------------
}
