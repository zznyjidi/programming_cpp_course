#include <iostream>
using namespace std;

int main() {
    int arr2D2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for (int i = 0; i < 3; i++) {
        arr2D2[i][i] = 0;
        arr2D2[i][2-i] = 0;
    }
}
