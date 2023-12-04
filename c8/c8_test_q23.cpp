#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int length;
    double cost = 1.5;
    cin >> length;
    if (length > 30) {
        if (length <= 330) {
            cost += 1.25 * ((length - 30)/30);
            if (length % 30 != 0) cost += 1.25;
        } else {
            cost += 1.25 * 10;
            cost += (length - 330)/60;
            if ((length - 330) % 60 != 0) cost += 1;
            if (cost > 20) cost = 20;
        }
    }
    cout << "$" << setprecision(2) << fixed << cost << endl;
}
