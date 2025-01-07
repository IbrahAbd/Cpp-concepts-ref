#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

class sequence{
    private:
        std::list<int> values;
    public:
        sequence(const list<int> & in) : values(in){}
        ~sequence(){}

        sequence operator/(const list<int> values2) const{
            sequence result(*this);
            for (auto value: values2){
                result.values.remove(value);
            }

            return result;
        }

        void display() const {
            for (auto value : values) {
                std::cout << value << " ";
            }
            std::cout << std::endl;
        }
};


int main() {
    //std::list<int> list1 = {1, 2, 3, 4, 5};
    //std::list<int> list2 = {2, 4};

    //sequence seq1(list1);
    //sequence result = seq1 / list2;  // Remove elements of list2 from seq1

    //seq1.display();  // Original sequence
    //result.display();  // Modified sequence after removing values from list2

    vector<int> v = {1,2,5,3,4,2,6,1};
    vector<int> v2(v.size());

    transform(v.begin(),v.end(),v2.begin(),[](int i){return i < 3 ? 0 : 1;});

    for (auto & i : v2){
        cout << i << " ";
    }
    return 0;
}