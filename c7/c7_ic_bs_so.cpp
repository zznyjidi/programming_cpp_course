#include <iostream>
using namespace std;

int main() {
    int Num[10], sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> Num[i];
        sum += Num[i];
    }

    int av = sum/10;

    for (int i = 0; i < 10; i++) {
        if(Num[i] > av) {
            cout << Num[i] << endl;
        }
    }
}
