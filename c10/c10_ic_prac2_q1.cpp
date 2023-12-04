#include <iostream>
using namespace std;

bool isDivide(int a, int b) {
    double devide = a / b;
    return devide % 1 == 0;
}

int main() {
    cout<<isDivide(10,5)<<endl;
    cout<<isDivide(20, 10)<<endl;
    cout<<isDivide(10,7)<<endl;
}
