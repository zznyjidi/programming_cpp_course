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

class MixedFreaction : public Fraction{
    int IntegerPart;

    public:
    MixedFreaction(int intInit, int nInit, int dInit) : Fraction(nInit, dInit) {
        IntegerPart = intInit;
    }

    int getInt() {
        return IntegerPart;
    }

    string String () {
        string FracString = to_string(IntegerPart) + " " + to_string(getNumerator()) + "/" + to_string(getDenominator());
        return FracString;
    }
    string simplifi () {
        int gcd = GCD(getNumerator(), getDenominator());
        Fraction simpleFrac(getNumerator()/gcd + IntegerPart * (getDenominator()/gcd), getDenominator()/gcd);
        return simpleFrac.String();
    }

    Fraction add(MixedFreaction mF1, MixedFreaction mF2) {
        int mF1n = mF1.getDenominator() * mF1.getInt() + mF1.getNumerator();
        int mF1d = mF1.getDenominator();
        int mF2n = mF2.getDenominator() * mF2.getInt() + mF2.getNumerator();
        int mF2d = mF2.getDenominator();
        int sumN = mF1n * mF2d + mF2n * mF1d;
        int sumD = mF1d * mF2d;
        Fraction sum(sumN, sumD);
        return sum;
    }
};

int main(){
}
