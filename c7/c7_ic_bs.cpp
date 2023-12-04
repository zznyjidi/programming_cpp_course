#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;

    int sum = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10, av = sum/10;

    if(n1 > av) cout << n1 << endl;
    if(n2 > av) cout << n2 << endl;
    if(n3 > av) cout << n3 << endl;
    if(n4 > av) cout << n4 << endl;
    if(n5 > av) cout << n5 << endl;
    if(n6 > av) cout << n6 << endl;
    if(n7 > av) cout << n7 << endl;
    if(n8 > av) cout << n8 << endl;
    if(n9 > av) cout << n9 << endl;
    if(n10 > av) cout << n10 << endl;
}
