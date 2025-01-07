#include <iostream>

class Base{
    public:
        virtual void print(){
            std::cout << "Base" << std::endl;
        }

        virtual ~Base(void){}
};

class Derived: public Base{
        void print(){
            std::cout << "Derived" << std::endl;
        }

        virtual ~Derived(void){}
};

Base * b = dynamic_cast<Base *>(new Base);

Base * d = dynamic_cast<Derived *>(new Derived);

int main(){
    b->print();
    d->print();
    return 0;
}
