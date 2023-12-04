#include <iostream>
using namespace std;

int BinarySearch(int intArr[], int intTarget, int n) {
    int mid = 0 - n;
    if (intArr[mid] == intTarget) return mid;
    else if (intArr[0-n] > intTarget) {
        return BinarySearch(intArr, intTarget, n/2);
    }
}

int main() {
    int  intArr1[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<BinarySearch(intArr1, 1,10)<<endl;
    cout<<BinarySearch(intArr1, -100,10)<<endl;
}
