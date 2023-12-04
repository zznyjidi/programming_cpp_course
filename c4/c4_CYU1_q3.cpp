#include <iostream>
using namespace std;

int main() {
    int n;
    int NoPrime = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (n % (i+1) == 0){
            NoPrime += 1;
        }
    }
    if (NoPrime == 2) {
        cout<<"prime"<<endl;
    } else {
        cout<<"not prime"<<endl;
    }
}