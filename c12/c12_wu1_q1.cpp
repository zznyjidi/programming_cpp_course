#include <iostream>
using namespace std;

/**

     * 

     * @param intArr is an Integer array

     * @param intTarget is a value to be found in intArr

     * @return the index of intTarget if found in intArr else return -1;

     */

int LinearSearch(int intArr [], int intTarget, int n){
    for (int i = 0; i < n; i++) {
        if (intArr[i] == intTarget) return i;
    }
    return -1;
}

int main() {
    int intArr1[7] = {-10,100,87,45,35,23,12};
    cout<<LinearSearch(intArr1, 100,7)<<endl;
    cout<<LinearSearch(intArr1, -100,7)<<endl;
}
