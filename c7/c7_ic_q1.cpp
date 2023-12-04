#include <iostream>
using namespace std;

int main() {
    int Num[10];

    for (int i = 0; i < 10; i++) {
        cin >> Num[i];
    }

    for (int i = 9; i > -1; i--) {
        cout << Num[i] << " ";
    }
    cout<<endl;
}
