#include <iostream>
using namespace std;

int main() {
    int NoC, NoR;
    cin >> NoC >> NoR;

    int Array[NoC][NoR];
    for (int i = 0; i < NoC; i++) {
        for (int i2 = 0; i2 < NoR; i2++) {
            cin >> Array[i][i2];
        }
    }

    int ArrayLength = NoC * NoR, Array21DimIndex = 0;
    int Array21Dim[ArrayLength];
    for (int i = 0; i < NoC; i++) {
        for (int i2 = 0; i2 < NoR; i2++) {
            Array21Dim[Array21DimIndex] = Array[i][i2];
            Array21DimIndex++;
        }
    }

    bool isDiverse = true;
    for (int i = 0; i < ArrayLength; i++) {
        for (int i2 = 0; i2 < ArrayLength; i2++) {
            if (i != i2 && Array21Dim[i] == Array21Dim[i2]) isDiverse = false;
        }
    }

    if (isDiverse) {
        cout << "Diverse" << endl;
    } else {
        cout << "Not Diverse" << endl;
    }
}
