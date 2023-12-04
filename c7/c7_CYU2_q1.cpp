#include <iostream>
using namespace std;

int main() {
    int burger[4], side[4], drink[4], dessert[4];

    burger[0] = 461;
    burger[1] = 431;
    burger[2] = 420;
    burger[3] = 0;

    side[0] = 100;
    side[1] = 57;
    side[2] = 70;
    side[3] = 0;

    drink[0] = 130;
    drink[1] = 160;
    drink[2] = 118;
    drink[3] = 0;

    dessert[0] = 167;
    dessert[1] = 266;
    dessert[2] = 75;
    dessert[3] = 0;

    int NoB, NoS, NoDr, NoDe; 
    cin >> NoB >> NoS >> NoDr >> NoDe;
    int sum = burger[NoB-1] + side[NoS-1] + drink[NoDr-1] + dessert[NoDe-1];

    cout << "Your total Calorie count is " << sum << "." << endl;
}
