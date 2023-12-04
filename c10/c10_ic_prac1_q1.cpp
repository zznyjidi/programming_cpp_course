#include <iostream>
using namespace std;

int myMode(int a, int b) {
    int count = a / b;
    return a - b * count;
}

int main() {
    cout<<myMode(10,20)<<endl;
    cout<<myMode(20,20)<<endl;
    cout<<myMode(23,30)<<endl;
}
