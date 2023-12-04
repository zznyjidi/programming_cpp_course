#include <iostream>
using namespace std;

int main() {
    int dishes[4][4];
    // Burgers
    dishes[0][0] = 461;
    dishes[0][1] = 431;
    dishes[0][2] = 420;
    dishes[0][3] = 0;
    // Side
    dishes[1][0] = 100;
    dishes[1][1] = 57;
    dishes[1][2] = 70;
    dishes[1][3] = 0;
    // Drink
    dishes[2][0] = 130;
    dishes[2][1] = 160;
    dishes[2][2] = 118;
    dishes[2][3] = 0;
    // Dessert
    dishes[3][0] = 167;
    dishes[3][1] = 266;
    dishes[3][2] = 75;
    dishes[3][3] = 0;

    int NOCh = 4;
    int choise[NOCh];
    for (int i = 0; i < NOCh; i++) {
        cin >> choise[i];
    }

    int total = 0;
    for (int i = 0; i < NOCh; i++) {
        total += dishes[i][choise[i] - 1];
    }

    cout << "Your total Calorie count is " << total << ". " << endl;
}
