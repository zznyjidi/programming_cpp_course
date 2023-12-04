#include <iostream>
using namespace std;

int sum(int start, int end) {
    if (start == end) {
        return start;
    } else {
        return end + sum(start, end - 1);
    }
}

int main() {
    cout << (sum(1,100)) << endl;
    cout << (sum(1,1)) << endl;
    cout << (sum(1,10)) << endl;
}
