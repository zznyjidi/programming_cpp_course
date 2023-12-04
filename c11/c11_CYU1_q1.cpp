#include <iostream>
using namespace std;

int nthFactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * nthFactorial(n-1);
    }
}

int main() {
    cout << nthFactorial(5) << endl;
    cout << nthFactorial(3) << endl;
    cout << nthFactorial(0) << endl;
}
