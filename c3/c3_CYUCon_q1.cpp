#include <iostream>
using namespace std;

int main() {
    int player1 = 100;
    int player2 = 100;
    int rounds, dice1, dice2;
    cin >> rounds;
    for (int i = 0; i < rounds; i++) {
        cin >> dice1 >> dice2;
        if (dice1 > dice2) {
            player2 -= dice1;
        } else if (dice1 < dice2) {
            player1 -= dice2;
        }
    }
    cout<<player1<<endl<<player2<<endl;
}
