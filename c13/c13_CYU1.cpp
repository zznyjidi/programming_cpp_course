#include <iostream>
#include <math.h>
using namespace std;

int GCD(int numA, int numB) {
    int gcd = 1;
    for (int i = 1; i <= min(numA, numB); i++) {
        if(numA % i == 0 && numB % i == 0) gcd = i;
    }
    return gcd;
}

class Fraction {
    int numerator, denominator;

    public:
        Fraction (int nInit, int dInit) {
            numerator = nInit;
            denominator = dInit;
        }

        int getNumerator () {
            return numerator;
        }
        int getDenominator () {
            return denominator;
        }

        string String () {
            string FracString = to_string(numerator) + "/" + to_string(denominator);
            return FracString;
        }
        void printFraction () {
            cout << String() << endl;
        }

        string simplifi () {
            int gcd = GCD(numerator, denominator);
            Fraction simpleFrac(numerator/gcd, denominator/gcd);
            return simpleFrac.String();
        }
        void simplifiedFraction() {
            cout << simplifi() << endl;
        }

};

int main(){
  Fraction f1(10,15);
  f1.simplifiedFraction();
}
