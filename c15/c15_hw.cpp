#include <iostream>
using namespace std;

void sort2(double** p1, double** p2) {
    if (**p1 > **p2) {
        double *temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}

int main(){
    double n1 = 5.3, n2 = 3.5;
    double *pn1 = &n1, *pn2 = &n2;
    cout << *pn1 << ", " << *pn2 << endl;
    cout << pn1 << ", " << pn2 << endl;
    sort2(&pn1, &pn2);
    cout << *pn1 << ", " << *pn2 << endl;
    cout << pn1 << ", " << pn2 << endl;
}
