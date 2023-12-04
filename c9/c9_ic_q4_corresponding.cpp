#include <iostream>
using namespace std;

int main() {
    int arr2D3[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2D4[2][3] = {{7, 8, 9}, {10, 11, 12}};

    int ArrayCombined[2][3];
    for (int i = 0; i < 2; i++) {
        for (int i2 = 0; i2 < 3; i2++) {
            ArrayCombined[i][i2] = arr2D3[i][i2] + arr2D4[i][i2];
        }
    }
}
