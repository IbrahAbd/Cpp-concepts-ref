#include <iostream>
int main(void){
	int a = 4;
	int * ptr = nullptr;
	if (ptr == nullptr){
		ptr = &a;
	}
	
	std::cout << *ptr;
	
}
