#include <iostream>


template<typename T> class Template_example {
public:
    T value;
    Template_example(T value) : value(value) {}
    void print() {
        std::cout << value << std::endl;
    }
};

int main() {
    Template_example<int> example(5);
    example.print();
    return 0;
}