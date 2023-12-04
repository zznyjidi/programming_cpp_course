#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double w, h, bmi;
    cin >> w >> h;
    bmi = w/pow(h,2);

    cout<<bmi<<endl;

    if (bmi < 15) {
        cout<<"Starvation"<<endl;
    } else if (bmi < 17.5) {
        cout<<"Anorexic"<<endl;
    } else if (bmi < 18.5) {
        cout<<"Underweight"<<endl;
    } else if (bmi < 25) {
        cout<<"Ideal"<<endl;
    } else if (bmi < 30) {
        cout<<"Overweight"<<endl;
    } else if (bmi < 40) {
        cout<<"Obese"<<endl;
    } else {
        cout<<"Morbidly Obese"<<endl;
    }
}