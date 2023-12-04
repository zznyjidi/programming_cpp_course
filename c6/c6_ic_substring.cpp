#include <iostream>
using namespace std;

int main() {
    string strPm = "Srimawo Ratwatte Banadaranayake";
    for (int i = strPm.length()-1; i > -1; i--) {
        cout << strPm.substr(i,1);
    }
    cout << endl;
}