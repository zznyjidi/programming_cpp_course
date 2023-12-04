#include <iostream>
using namespace std;

void printArray(int intArr[], int n){
    for(int i = 0; i < n; i++){
        cout<<intArr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int intArr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int i2 = 0; i2 < n - 1; i2++) {
            if (intArr[i2] > intArr[i2 + 1]) {
                int buffer = intArr[i2];
                intArr[i2] = intArr[i2 + 1];
                intArr[i2 + 1] = buffer;
            }
        }
    }
}

int main() {
    int n = 10;
    int intArr1[n] = {10,9,8,7,6,5,4,3,2,1};
    int intArr2[n] = {1,2,3,4,5,6,7,8,9,10};
    bubbleSort(intArr1,n);
    bubbleSort(intArr2,n);
    printArray(intArr1,n);
    printArray(intArr2,n);
}
