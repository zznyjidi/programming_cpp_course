#include <iostream>
using namespace std;

string trick(int n) {
    if (n == 0) {
        return "0";
    } else if (n == 1) {
        return "1";
    } else {
        return trick(n - 1) + trick(n - 2);
    }
}

int main() {
    cout<<trick(2)<<endl;
    cout<<trick(5)<<endl;
}
