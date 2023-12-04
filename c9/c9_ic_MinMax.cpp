#include <iostream>
using namespace std;

int main() {
    int arr2D1[3][3] = {{-10,23,45},{100,98,123},{-100, -10000,1}};

    int NoC = 3, NoR = 3;
    int ArrayLength = NoC * NoR, Array21DimIndex = 0;
    int Array21Dim[ArrayLength];
    for (int i = 0; i < NoC; i++) {
        for (int i2 = 0; i2 < NoR; i2++) {
            Array21Dim[Array21DimIndex] = arr2D1[i][i2];
            Array21DimIndex++;
        }
    }

    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < ArrayLength; i++) {
        if (Array21Dim[i] > max) max = Array21Dim[i];
        if (Array21Dim[i] < min) min = Array21Dim[i];
    }

    cout << "min: " << min << endl << "max: " << max << endl;
}
