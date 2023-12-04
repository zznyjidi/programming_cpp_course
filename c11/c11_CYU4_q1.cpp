#include <iostream>
using namespace std;

string removeAll(string original, string remove) {
    int removeIndex = original.find(remove), removeLength = remove.length();
    if (removeIndex == -1) {
        return original;
    } else {
        string output = "";
        output += original.substr(0, removeIndex);
        output += original.substr(removeIndex + removeLength);
        return removeAll(output, remove);
    }
}

int main() {
    cout << removeAll("the red cat sat on the mat", "the") << endl;
    cout << removeAll("the red cat sat on the mat", "blue") << endl;
}
