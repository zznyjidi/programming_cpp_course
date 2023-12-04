#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 1) cout << 1 << " ";
    for (int i = 1; i <= n; i++) {
        for (int i2 = 2; i2 < i; i2++) {
            if (i % i2 == 0) {
                cout << i <<" ";
                break;
            }
        }
    }
}