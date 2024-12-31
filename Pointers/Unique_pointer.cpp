#include <iostream>
#include <memory>
#include <string>

class Book{
    public:
        std::string title;
        std::string author;
        Book(std::string title, std::string author): title(title), author(author){}

        void print(){
            std::cout << title << " by " << author << std::endl;
        }

        ~Book(){
            std::cout << "Book destroyed" << std::endl;
        }
};

int main(){

    std::unique_ptr<Book> book1 = std::make_unique<Book>("Harry Potter", "J.K. Rowling");
    book1->print();

    std::unique_ptr<Book> book2 = std::move(book1);
    book2->print();

    // This will give an error because book1 is now a nullptr. Ownership has been transfere to book2.
    // book1->print(); 
}