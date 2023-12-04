#include <iostream>
using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz";

int binarySearch(string strArr[], string strTarget, int n) {
    int min = 0, max = n -1;
    int mid;

    while (min <= max) {
        mid = (min + max) / 2;
        if (strArr[mid] == strTarget) return mid;
        else if(strTarget > strArr[mid]) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }
    return -1;
}

int main() {
    string str[4] = {"boy","cat","tiger","zebra"};
    cout<<binarySearch(str, "tiger",4)<<endl;;
    cout<<binarySearch(str, "stephen",4)<<endl;;
    cout<<binarySearch(str, "zebra",4)<<endl;
}
