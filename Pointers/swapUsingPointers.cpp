#include <iostream>

void swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
	int a = 4;
	int b = 5;
	swap(&a,&b);
	
	std::cout << a  << "\n" << b;
}
