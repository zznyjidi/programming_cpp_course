#include <iostream>
using namespace std;

int linearSearch(string strArr[], string strTarget) {
    for (int i = 0; i < ; i++) {
        if (strArr[i] == strTarget) return i;
    }
    return -1;
}

int main() {
    string str[4] = {"stephen","tiger","banana","elephant"};
    cout<<linearSearch(str, "tiger")<<endl;
    cout<<linearSearch(str, "stephen")<<endl;
    cout<<linearSearch(str, "donald")<<endl;
}
