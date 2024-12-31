#include <iostream>
#include <vector>
#include <memory>
#include <string>


class Car{
    public:
        std::string name;

        Car(const std::string &name) : name(name){};

        void display() const{
            std::cout << "Car name: " << name << "\n";
        }
};

int main(){
    std::shared_ptr<Car> car1 = std::make_shared<Car>("Toyota");
    std::shared_ptr<Car> car2 = car1;


    car1->display();
    car2->display();


    std::cout << "Reference count: " << car1.use_count() << "\n";
    return 0;
}