#include <iostream>
using namespace std;

void printArray(int intArr[], int n){
    for(int i = 0; i < n; i++){
        cout<<intArr[i] <<" ";
    }
    cout<<endl;
}

void swapInt(int n1, int n2) {
    int temp = n2;
    n2 = n1;
    n1 = temp;
}

void selectionSort(int arr[], int arrLength) {
    for (int i = arrLength - 1; i > -1; i--) {
        int maxIndex = 0;
        int max = arr[maxIndex];
        for (int i2 = 0; i2 < i + 1; i2++) {
            if (arr[i2] > max) {
                maxIndex = i2;
                max = arr[maxIndex];
            }
        }
//        swapInt(arr[i], arr[maxIndex]);
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int intArr1[10] = {10,9,8,7,6,5,4,3,2,1};
    int intArr2[10] = {1,2,3,4,5,6,7,8,9,10};
    selectionSort(intArr1,10);
    selectionSort(intArr2,10);
    printArray(intArr1,10);
    printArray(intArr2,10);
}
