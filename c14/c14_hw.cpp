#include <iostream>
using namespace std;

int GCD3(int numA, int numB, int numC) {
    int gcd = 1;
    for (int i = 1; i <= min(numA, numB, numC); i++) {
        if(numA % i == 0 && numB % i == 0 && numC % i == 0) gcd = i;
    }
    return gcd;
}

class Point{
    public:
    int x, y;
    Point(int xInit, int yInit) {
        x = xInit;
        y = yInit;
    }
};

class Line{
    public:
    //Store in Ax + By = C Format
    int a, b, c;
    //Two Point Line
    Line(Point p1, Point p2) {
        int rise = p2.y - p1.y, run = p2.x - p1.x;
        int slope = rise/run;
        int yint = p1.y - p1.x * slope;
        Line var2L(slope, yint);
        a = var2L.a;
        b = var2L.b;
        c = var2L.c;
    }
    //Mx + B Format Line
    Line(int M, int B) {
        Line var3L((0 - M * 3), 3, (B *3));
        a = var3L.a;
        b = var3L.b;
        c = var3L.c;
    }
    //Ax + By = C Format Line
    Line(int A, int B, int C) {
        int gcd = GCD3(A, B, C);
        a = A/gcd;
        b = B/gcd;
        c = C/gcd;
    }

    //Functions - X&Y Intercept
    int xInt() {
        return c/b;
    }
    int yInt() {
        return c/a;
    }

    //Functions - Slope
    int slope() {
        int rise = 0 - yInt(), run = xInt();
        return rise/run;
    }
};

int main(){
    
}
