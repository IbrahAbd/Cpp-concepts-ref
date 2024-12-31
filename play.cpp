#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};
    vector<int> v2(v.size());

    transform(v.rend(), v.rbegin(),v2.begin(),[](int n,int m){return n*3;});

    for (int i :v2){
        cout << i << " ";
    }
    return 0;
}