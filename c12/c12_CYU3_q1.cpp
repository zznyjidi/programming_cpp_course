#include <iostream>
using namespace std;

void printArray(string strArr[], int n) {
    for(int i = 0; i < n; i++){
        cout << strArr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(string strArr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int i2 = 0; i2 < n - 1; i2++) {
            if (strArr[i2] > strArr[i2 + 1]) {
                string buffer = strArr[i2];
                strArr[i2] = strArr[i2 + 1];
                strArr[i2 + 1] = buffer;
            }
        }
    }
}

int main() {
    int length1 = 4, length2 = 6;
    string str1[length1] = {"zebra","cat", "banana", "elephant"};
    string str2[length2] = {"Z","z","D","d","A","a"};
    bubbleSort(str1, length1);
    bubbleSort(str2, length2);
    printArray(str1, length1);
    printArray(str2, length2);
}
