#include <iostream>
using namespace std;

class Value1 {
    int x, y, z;

    public:
        Value1 () {
            x = 0;
            y = 0;
            z = 0;
        }
        Value1 (int xInit, int yInit, int zInit) {
            x = xInit;
            y = yInit;
            z = zInit;
        }

        void move (int xMove, int yMove, int zMove) {
            x += xMove;
            y += yMove;
            z += zMove;
        }
        string discribe() {
            string discribe = "x: " + to_string(x) + ", y: " + to_string(y) + ", z: " + to_string(z);
            return discribe;
        }
        void printDiscribe() {
            cout << discribe() << endl;
        }
};

int main() {
    Value1 v1;
    cout << v1.discribe() << endl;
    v1.move(13, 27, -5);
    v1.printDiscribe();
}
