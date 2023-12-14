#include <iostream>
using namespace std;

int GCD3(int numA, int numB, int numC) {
    int gcd = 1;
    for (int i = 1; i <= min(min(numA, numB), numC); i++) {
        if(numA % i == 0 && numB % i == 0 && numC % i == 0) gcd = i;
    }
    return gcd;
}

string helpDoc = "testDoc";

class Point{
    public:
    int x, y;
    Point() {} //Allow Empty Point
    Point(int xInit, int yInit) {
        x = xInit;
        y = yInit;
    }
};

class Line{
    public:
    //Store in Ax + By = C Format
    int a, b, c;
    Line() {} //Allow Empty Line
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

    //Funtions - 2Lines
    bool isParallel(Line l1) {
        return (slope() == l1.slope());
    }
    bool isConcident(Line l1) {
        return (a == l1.a && b == l1.b && c == l1.c);
    }
    Point intersect(Line l1) {
        Line tempL0(a, b, c);
        Line tempL1 = l1;
        //opposite coefficients for Ax
        tempL0.a = tempL0.a * l1.a;
        tempL0.b = tempL0.b * l1.a;
        tempL0.c = tempL0.c * l1.a;
        tempL1.a = tempL1.a * (0 - a);
        tempL1.b = tempL1.b * (0 - a);
        tempL1.c = tempL1.c * (0 - a);
        //Add up
        Line sum(tempL0.a + tempL1.a, tempL0.b + tempL1.b, tempL0.c + tempL1.c);
        //Slove y from sum(Ax = 0)
        int intY = sum.c / sum.b;
        //Slove x from Line0(y = intY)
        int intX = (c - b * intY) / a;
        //return intersect point
        return Point(intX, intY);
    }
};

class PointList{
    int index;
    const int ArrLength = 32;
    string names[32];
    Point points[32];
    public:
    PointList() {
        initArr;
    }
    void initArr() {
        for (int i = 0; i < ArrLength; i++) {
            names[i] = "";
            points[i] = Point(0, 0);
        }
    }
    int getIndex(string name) {
        int index = -1;
        for (int i = 0; i < index; i++) {
            if (names[i] == name) {
                index = i;
                break;
            }
        }
        return index;
    }
    bool add(string name, Point p) {
        if (index < ArrLength && getIndex(name) == -1) {
            names[index] = name;
            points[index] = p;
            index++;
            return true;
        } else return false; //List is Full or Name Already Exist
    }
    bool del(int delIndex) {
        if (delIndex < index) {
            names[delIndex] = names[index - 1];
            points[delIndex] = points[index - 1];
            index--;
            names[index] = "";
            points[index] = Point(0, 0);
            return true;
        } else return false; //Index out of Range
    }
};

class CommandLine{
    string inputStart;
    char cmdSeperator;
    int maxInput;
    public:
    string inputs[32];
    CommandLine(string startWith, string input,int initMaxInput, char seperateBy) {
        cout << startWith << endl;
        inputStart = input;
        maxInput = initMaxInput;
        cmdSeperator = seperateBy;
        initInputArr();
    }
    void initInputArr() {
        for (int i = 0; i < maxInput; i++) inputs[i] = "";
    }
    void getInput() {
        initInputArr();
        cout << inputStart;
        string input;
        getline(cin, input);
        int index = 0;
        for(int i = 0; i < input.length() && index < maxInput; i++) {
            if(input[i] != cmdSeperator) inputs[index] += input[i];
            else index++;
        }
    }
};

int main(){
    for(CommandLine cmd("Welcome! ", "# ", 6, ' '); cmd.inputs[0] != "exit"; cmd.getInput()) {
        string command = cmd.inputs[0];
        if(command == "") {
            continue;
        } else if(command == "help") {
            cout << helpDoc << endl;
        } else {
            cout << "Unknown command, use command \"help\" to get help. " << endl;
        }
    }
}
