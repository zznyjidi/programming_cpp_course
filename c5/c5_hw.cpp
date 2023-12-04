#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Question 1
    cout<<"Q1"<<endl;

    // Question 2
    cout<<"Q2"<<endl;
    int buffer, isbn, digit, total = 0;
    cout << "Input a ISBN: ";
    cin >> isbn;
    for (int i = 10; i > 1; i--) {
        buffer = (isbn/pow(10,i-1));
        digit = (isbn/(pow(10,i-2))) - buffer*10;
        total += digit*i;
    }
    buffer = 11 - total % 11;
    isbn = isbn * 10 + buffer;
    cout << isbn;

    // Question 3
    cout<<"Q3"<<endl;
    int n;
    bool isPrime;
    cout << "Input a Number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        isPrime = true;
        if (i == 0 || i ==1) {
            isPrime == false;
            continue;
        }
        for (int i2 = 0; i2 < i; i2++) {
            if (i2 != 0 && i2 != 1 && i%i2 == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << i << " ";
    }
    cout << endl;
}
