#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        if (n % (i+1) == 0){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}