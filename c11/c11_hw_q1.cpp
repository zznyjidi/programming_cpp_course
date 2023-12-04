#include <iostream>
using namespace std;

int powerN(int base, int power) {
    if (power == 1) {
        return base;
    } else if (power == 0) {
        return 1;
    } else if (power > 0) {
        return base * powerN(base, power - 1);
    } else {
        return powerN(base, power + 1) / base;
    }
}

int main() {
    cout<<powerN(2,3)<<endl;
    cout<<powerN(2,0)<<endl;
    cout<<powerN(4,1)<<endl;
}
