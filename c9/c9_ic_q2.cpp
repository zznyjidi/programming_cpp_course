#include <iostream>
using namespace std;

int main() {
    int arr2D[3][3], num = 1;

    for (int i = 0; i < 3; i++) {
        for (int i2 = 0; i2 < 3; i2++) {
            arr2D[i][i2] = num;
            num++;
        }
    }
}
