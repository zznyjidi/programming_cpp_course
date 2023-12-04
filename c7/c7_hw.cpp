#include <iostream>
using namespace std;

int main() {
    //Question1 - RandomArray
    cout << "Q1" << endl;
    int randomArray[10];
    for(int i = 0; i < 10; i++) {
        randomArray[i] = rand();
    }

    for(int i = 0; i < 10; i += 2) {
        cout << randomArray[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 10; i++) {
        if(randomArray[i] % 2 == 0) {
            cout << randomArray[i] << " ";
        }
    }
    cout << endl;

    for(int i = 9; i > -1; i--) {
        cout << randomArray[i] << " ";
    }
    cout << endl;

    cout << randomArray[0] << " " << randomArray[9] << endl;

    //Question2 - Locker
    cout << "Q2" << endl;
    bool isOpen[101];
    for(int i = 0; i < 101; i++) {
        isOpen[i] = true;
    }
    for(int i = 2; i <= 100; i++) {
        for(int index = 0; index < 101; index++) {
            if(index%i == 0) {
                if(isOpen[index]) {
                    isOpen[index] = false;
                } else {
                    isOpen[index] = true;
                }
            }
        }
    }
    for(int i = 1; i <= 100; i++) {
        if(isOpen[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}
