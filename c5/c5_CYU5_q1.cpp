#include <iostream>
using namespace std;

int main() {
    int n, buffer, out = 0;
    cin >> n;
    for(int i = 1; n%i != n; i = i*10) {
        buffer = n/(i*10)*10;
        out += n/i - buffer;
    }
    cout<<out<<endl;
}
