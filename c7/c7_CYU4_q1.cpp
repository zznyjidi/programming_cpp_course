#include <iostream>
using namespace std;

int main() {
    int fibonacci[45];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    int input;
    cin >> input;

    for(int i = 2; i < input+1; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    cout << fibonacci[input] << endl;
}
