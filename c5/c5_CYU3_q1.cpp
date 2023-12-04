#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cin >> n;
    if (n == 1) {
        isPrime = false;
    } else {
        for (int i = 0; i < n; i++) {
            if (i != 0 && i != 1) {
                if (n%i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
    }
    if (isPrime){
        cout<<"Prime";
    } else {
        cout<<"Not a prime";
    }
}