
#include <iostream>
int main(void){
	int arr[] = {1,2,3,4,5};
	int * ptr = arr;
	
	// One element in arr[] is 4 bytes, with 5 elements using sizeof() will return 20 for the 20 bytes.
	// Divide this 20 bytes by the 4 bytes of one element to find the size of the array.
	for (size_t i=0;i < (sizeof(arr)/sizeof(arr[0])) ;i++){
		std::cout << *(ptr+i) << "\n";
	}
}
