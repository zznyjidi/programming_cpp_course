#include <iostream>
using namespace std;

int main() {
    int w, p;
    cin >> w;

    if (w <= 30) {
        p = 40;
    } else if (w <= 50) {
        p = 55;
    } else if (w <= 100) {
        p = 70;
    } else {
        int e = (w - 100);
        p = 70 + e/50*25;
        if (e % 50 != 0) {
            p += 25;
        }
    }

    cout<<p<<" sinas"<<endl;
}