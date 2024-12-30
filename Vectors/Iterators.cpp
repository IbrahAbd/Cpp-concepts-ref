#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> v = {1, 2, 3, 4, 5};


    // Iterators are used to iterate over the elements of a container.
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++){
        cout << *i << " ";
    }

    // Reverse iterator is used to iterate over the elements of a container in reverse order.
    for (vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); i++){
        cout << *i << " ";
    }
}
