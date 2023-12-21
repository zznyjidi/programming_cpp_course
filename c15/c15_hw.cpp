#include <iostream>
using namespace std;

void sort2(double** p1, double** p2) {
    if (**p1 > **p2) {
        double *temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}

double replace_if_greater(double* p, double x) {
    double oldP = *p;
    if (x > *p) {
        *p = x;
    }
    return oldP;
}

double average(double* a, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *a;
        a++;
    }
    return sum/size;
}

int main(){
    double n1 = 5.3, n2 = 3.5;
    double *pn1 = &n1, *pn2 = &n2;
    cout << *pn1 << ", " << *pn2 << endl;
    cout << pn1 << ", " << pn2 << endl;
    sort2(&pn1, &pn2);
    cout << *pn1 << ", " << *pn2 << endl;
    cout << pn1 << ", " << pn2 << endl;

    replace_if_greater(pn1, n1);
    cout << *pn1 << ", " << *pn2 << endl;
    cout << pn1 << ", " << pn2 << endl;

    const int arrayLength = 5;
    double array[arrayLength] = {1, 2, 3, 4, 5};
    double *arrayPT = array;
    double aveArray = average(arrayPT, arrayLength);
    cout << aveArray << endl;
}
