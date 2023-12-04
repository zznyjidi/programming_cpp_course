#include <iostream>
using namespace std;

int main() {
    int arr2D[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for (int i = 0; i < 3; i++) {
        for (int i2 = 2; i2 > -1; i2--) {
            cout << arr2D[i][i2] << " ";
        }
        cout << endl;
    }
}
