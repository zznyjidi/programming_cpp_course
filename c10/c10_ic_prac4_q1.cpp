#include <iostream>
using namespace std;

bool isAllEven(int numbers[], int length) {
    for (int i = 0; i < length; i++) {
        if (numbers[i] % 2 != 0) return false;
    }
    return true;
}

int main() {
    int intArr1[5] = {2,4,6,8,10};
    int intArr2[5] = {1,3,5,7,9};
    int intArr3[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<isAllEven(intArr1,5)<<endl;
    cout<<isAllEven(intArr2,5)<<endl;
    cout<<isAllEven(intArr3,10)<<endl;
}
