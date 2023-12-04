#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    if (a >= 0 && a <= 359) {
        if (a <= 45 || a >= 315) {
            cout<<"N"<<endl;
        } else if (a < 135) {
            cout<<"E"<<endl;
        } else if (a <= 225) {
            cout<<"S"<<endl;
        } else {
            cout<<"W"<<endl;
        }
    } else {
        cout<<"Not a Azimuth"<<endl;
    }
}
