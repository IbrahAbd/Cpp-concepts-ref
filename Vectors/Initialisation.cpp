#include <iostream>
#include <vector>
using namespace std;

int main(void){
    std::vector<int> vec = {1,2,3,4,5};
    
    cout << vec.size() << endl;         // Returns the number of elements in the vector.
    cout << vec.capacity() << endl;     // Returns size of unallocated storage.
    cout << vec.max_size() << endl;     // Returns the maximum number of elements that the vector can hold.
    cout << vec.empty() << endl;        // Returns true if the vector is empty (1) or false (0) if it is not empty..
}
