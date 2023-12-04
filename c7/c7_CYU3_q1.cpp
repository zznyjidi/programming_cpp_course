#include <iostream>
using namespace std;

int main() {
    string Name[10];
    int Mark[10];
    for(int i = 0; i < 10; i++) {
        cin >> Name[i] >> Mark[i];
    }

    int indexOfHighest = 0, indexOfLowest = 0, highestMark = Mark[0], lowestMark = Mark[0];
    for(int i = 0; i < 10; i++) {
        if(Mark[i] > highestMark) {
            highestMark = Mark[i];
            indexOfHighest = i;
        }
        if(Mark[i] < lowestMark) {
            lowestMark = Mark[i];
            indexOfLowest = i;
        }
    }

    cout << Name[indexOfLowest] << " " << Mark[indexOfLowest] << endl;
    cout << Name[indexOfHighest] << " " << Mark[indexOfHighest] << endl;
}
