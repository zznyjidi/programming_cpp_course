#include <iostream>
using namespace std;

int main() {
    //Question 1 - Magic squares
    cout << "Q1" << endl;

    int nL = 4;
    int n[nL][nL];
    for (int i = 0; i < nL; i++) {
        for (int i2 = 0; i2 < nL; i2++) {
            cin >> n[i][i2];
        }
    }

    int calTimes = nL * 2 + 2, beforeCol = nL + 2, lastSum, iSum;
    bool isMagic = true;
    for (int i = 0; i < calTimes; i++) {
        iSum = 0;
        if (i == 0) {
            lastSum = 0;
            for (int i2 = 0; i2 < nL; i2++) {
                lastSum += n[i2][i2];
            }
            iSum = lastSum;
        } else if (i == 1) {
            for (int i2 = 0; i2 < nL; i2++) {
                iSum += n[i2][nL-1-i2];
            }
        } else if (i < beforeCol) {
            for (int i2 = 0; i2 < nL; i2++) {
                iSum += n[i-2][i2];
            }
        } else {
            for (int i2 = 0; i2 < nL; i2++) {
                iSum += n[i2][i - beforeCol];
            }
        }
        if (iSum != lastSum) {
            isMagic = false;
            break;
        }
    }

    if (isMagic) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    //Question 2 - Reverse Array
    cout << "Q2" << endl;

    int n2Row, n2Col;
    cout << "Rows: ";
    cin >> n2Row;
    cout << "Cols: ";
    cin >> n2Col;

    int n2[n2Row][n2Col];
    for (int i = 0; i < n2Row; i++) {
        for (int i2 = 0; i2 < n2Col; i2++) {
            cin >> n2[i][i2];
        }
    }

    for (int i = 0; i < n2Row; i++) {
        for (int i2 = n2Col - 1; i2 > -1; i2--) {
            cout << n2[i][i2] << " ";
        }
        cout << endl;
    }
}
