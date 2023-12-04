#include <iostream>
using namespace std;

int main() {
    int LastIndex, Length = 10;
    string toSchool[Length], EOS = "SCHOOL";
    for (int i = 0; i < Length; i++) {
        toSchool[i] = "";
    }

    for (int i = 0; toSchool[LastIndex] != EOS; i++) {
        cin >> toSchool[i];
        LastIndex = i;
    }

    for (int i = LastIndex; i > -1; i--) {
        if (i == 0) {
            if (toSchool[i] == "L") {
                cout << "Turn RIGHT into your HOME. " << endl;
            } else {
                cout << "Turn LEFT into your HOME. " << endl;
            }
        } else if (i%2 == 0) {
            if (toSchool[i] == "L") {
                cout << "Turn RIGHT onto " << toSchool[i-1] << " street. " << endl;
            } else {
                cout << "Turn LEFT onto " << toSchool[i-1] << " street. " << endl;
            }
        }
    }
}
