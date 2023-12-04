#include <iostream>
using namespace std;

int bubbleSortCount(int arr[], int n) {
    int swapsCount = 0;
    for (int i = 0; i < n; i++) {
        for (int i2 = 0; i2 < n - 1; i2++) {
            if (arr[i2] > arr[i2 + 1]) {
                int temp = arr[i2];
                arr[i2] = arr[i2 + 1];
                arr[i2 + 1] = temp;
                swapsCount++;
            }
        }
    }
    return swapsCount;
}

int main() {
    int testCount;
    cin >> testCount;

    for (int i = 0; i < testCount; i++) {
        int inputCount; 
        cin >> inputCount;
        int input[inputCount];
        for (int i2 = 0; i2 < inputCount; i2++) {
            cin >> input[i2];
        }
        cout << "Optimal train swapping takes " << bubbleSortCount(input, inputCount) << " swap(s). " << endl;
    }
}
