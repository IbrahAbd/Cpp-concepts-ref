#include <iostream>
#include <string>

class Animal{
    private:
        std::string name;
        int age;
    
    public:

        Animal(std::string n, int a): name(n), age(a){};

        virtual void speak() const{
            std::cout <<"Makes a wonderful sound.";
        }

        virtual ~Animal()
        {
            std::cout << "Destroying Animal: " << name << std::endl;
        }

        std::string getName() const
        {
            return name;
        }
};

class Dog : public Animal{

    public:
        Dog(std::string name, int age) : Animal(name, age) {}
        
        void speak() const override
        {
            std::cout << "Woof!" << std::endl;
        }

        ~Dog()
        {
            std::cout << "Destroying Dog: " << getName() << std::endl;
        }
};


int main(){
    Animal a("Generic Animal",3);
    a.speak();

    Dog d("Blud",5);
    d.speak();

    return 0;
}