#include <iostream>
using namespace std;

string toBin(int des) {
    if (des == 0) {
        return "0";
    } else if (des == 1) {
        return "1";
    } else {
        string bin = toBin(des/2) + to_string(des % 2);
        return bin;
    }
}

int main() {
    int input;
    cin >> input;
    cout << toBin(input) << endl;
}
