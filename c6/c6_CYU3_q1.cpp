#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;

    bool canBeUse = true;
    string usebleWords = "IOSHZXN";
    int leng = word.length();
    for(int i = 0; i < leng; i++) {
        int indexOfLetter = usebleWords.find(word[i]);
        if(indexOfLetter == -1) {
            canBeUse = false;
            break;
        }
    }
    if(canBeUse) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
