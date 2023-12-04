#include <iostream>
using namespace std;

int nthFibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return nthFibonacci(n - 1) + nthFibonacci(n - 2);
    }
}

int main() {
    cout<<nthFibonacci(2)<<endl;
    cout<<nthFibonacci(12)<<endl;
    cout<<nthFibonacci(1)<<endl;
}
