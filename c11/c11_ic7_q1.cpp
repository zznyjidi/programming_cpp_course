#include <iostream>
using namespace std;

int digitalSum(int n) {
    if (n > 10) {
        return digitalSum(n/10) + n%10;
    } else {
        return n;
    }
}

int main() {
    cout<<digitalSum(123)<<endl;
    cout<<digitalSum(123456789)<<endl;
}
