#include <iostream>
#include <string>
using namespace std;

int main() {
    string Sentence;
    getline(cin, Sentence);

    string buffer = Sentence;
    bool haveLeftSpace = true;
    while(haveLeftSpace) {
        cout << buffer[0] << " ";
        int indexOfSpace = buffer.find(" ");
        if(indexOfSpace == -1) {
            haveLeftSpace = false;
        } else {
            buffer = buffer.substr(indexOfSpace + 1);
        }
    }
    cout << endl;
}
