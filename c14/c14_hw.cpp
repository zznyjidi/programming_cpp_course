#include <iostream>
using namespace std;

int GCD3(int numA, int numB, int numC) {
    if (numA < 0) numA -= numA * 2;
    if (numB < 0) numB -= numB * 2;
    if (numC < 0) numC -= numC * 2;
    int gcd = 1;
    for (int i = 1; i <= min(min(numA, numB), numC); i++) {
        if(numA % i == 0 && numB % i == 0 && numC % i == 0) gcd = i;
    }
    return gcd;
}

class Point{
    public:
    int x, y;
    Point() {} //Allow Empty Point
    Point(int xInit, int yInit) {
        x = xInit;
        y = yInit;
    }
    string describe() {
        string des = "x: " + to_string(x) + ", y: " + to_string(y);
        return des;
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
        Line var2L;
        if (run == 0) {
            var2L = Line(1, 0, p1.x); //Vertical Line
        } else if (rise == 0) {
            var2L = Line(0, 1, p1.y); //Horiziontal Line
        } else {
            int slope = rise/run;
            int yint = p1.y - p1.x * slope;
            var2L = Line(slope, yint);
        }
        a = var2L.a;
        b = var2L.b;
        c = var2L.c;
    }
    //Mx + B Format Line
    Line(int M, int B) {
        Line var3L;
        if (M == 1 && B == 0) var3L = Line(1, -1, 0);
        else var3L = Line((0 - M * 3), 3, (B *3));
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


    //Line to String
    string describe() {
        string des = "in Ax + By = C Format: " + to_string(a) + "x + " + to_string(b) + "y = " + to_string(c);
        return des;
    }
    //Functions - X&Y Intercept
    double xInt() {
        double dA = a;
        double dC = c;
        return dC/dA;
    }
    double yInt() {
        if (b == 0) {
            return 0; //Vertical Line
        }
        double dB = b;
        double dC = c;
        return dC/dB;
    }

    //Functions - Slope
    double slope() {
        double rise = 0 - a, run = b;
        if (b == 0) {
            return 0; //Vertical Line
        }
        return rise/run;
    }

    //Funtions - 2Lines
    bool isParallel(Line l1) {
        return (a == l1.a && b == l1.b);
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
    int index = 0;
    const int ArrLength = 32;
    string names[32];
    Point points[32];
    public:
    PointList(Point defaultPoint) {
        initArr(defaultPoint);
    }
    void initArr(Point defaultPoint) {
        for (int i = 0; i < ArrLength; i++) {
            names[i] = "";
            points[i] = defaultPoint;
        }
    }
    int getIndex(string name) {
        int pIndex = -1;
        for (int i = 0; i < index; i++) {
            if (names[i] == name) {
                pIndex = i;
                break;
            }
        }
        return pIndex;
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
        if (delIndex > -1 && delIndex < index) {
            names[delIndex] = names[index - 1];
            points[delIndex] = points[index - 1];
            index--;
            names[index] = "";
            points[index] = Point(0, 0);
            return true;
        } else return false; //Index out of Range
    }
    Point get(int pIndex) {
        if (pIndex > -1 && pIndex < index) return points[pIndex];
        else return Point(0, 0);
    }
    bool del(string name) {
        return del(getIndex(name)); //Name Does not Exist
    }
    Point get(string name) {
        return get(getIndex(name));
    }
};

class LineList{
    int index = 0;
    const int ArrLength = 32;
    string names[32];
    Line lines[32];
    public:
    LineList(Line defaultLine) {
        initArr(defaultLine);
    }
    void initArr(Line defaultLine) {
        for (int i = 0; i < ArrLength; i++) {
            names[i] = "";
            lines[i] = defaultLine;
        }
    }
    int getIndex(string name) {
        int lIndex = -1;
        for (int i = 0; i < index; i++) {
            if (names[i] == name) {
                lIndex = i;
                break;
            }
        }
        return lIndex;
    }
    bool add(string name, Line l) {
        if (index < ArrLength && getIndex(name) == -1) {
            names[index] = name;
            lines[index] = l;
            index++;
            return true;
        } else return false; //List is Full or Name Already Exist
    }
    bool del(int delIndex) {
        if (delIndex > -1 && delIndex < index) {
            names[delIndex] = names[index - 1];
            lines[delIndex] = lines[index - 1];
            index--;
            names[index] = "";
            lines[index] = Line(0, 0, 0);
            return true;
        } else return false; //Index out of Range
    }
    Line get(int pIndex) {
        if (pIndex > -1 && pIndex < index) return lines[pIndex];
        else return Line(0, 0, 0);
    }
    bool del(string name) {
        return del(getIndex(name)); //Name Does not Exist
    }
    Line get(string name) {
        return get(getIndex(name));
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
            if(input[i] == cmdSeperator) {
                if((i - 1) >= 0) {
                    if(input[i - 1] != cmdSeperator) index++;
                    else continue;
                } else continue;
            }
            else inputs[index] += input[i];
        }
    }
};

bool SAble2I(string s) {
    string allInt = "0123456789";
    bool able = true;
    if (s.length() == 0) {
        able = false;
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (allInt.find(s[i]) == -1) {
                able = false;
                break;
            }
        }
    }
    return able;
}

void UnknownCommand(string command) {
    cout << "Unknown command \"" << command << "\", use command \"help\" to get help. " << endl;
}
void ObjectNotFound(string objectName) {
    cout << "Object \"" << objectName << "\" Not Found. " << endl;
}
void cmdSuccess() {
    cout << "Successed. " << endl;
}
void addError() {
    cout << "Unable to Add to Array, Array is Full or Object Already Exist. " << endl;
}
void syntaxError(string command) {
    cout << "Command Syntax Error, use command \"help " << command << "\" to get help. " << endl;
}

void printDoc(string command) {
    if (command == "") {
        cout << "Use \"help {command}\" to get command specific help" << endl;
        cout << "Command List(Case-Sensitive): " << endl;
        cout << "\thelp, point, line, calc, exit" << endl;
    } else if(command == "help") {
        cout << "No command specific help for \"help\". " << endl;
        cout << "Use \"help {command}\" to get command specific help" << endl;
    } else if(command == "point") {
        cout << "Command \"point\" is used to add, read or delete Points. " << endl;
        cout << "Syntax: " << endl;
        cout << "Add new Point: \t\tpoint add {point_name} {x(integer)} {y(integer)}" << endl;
        cout << "Read a Point: \t\tpoint read {point_name}" << endl;
        cout << "Delete a Point: \tpoint del {point_name}" << endl;
    } else if(command == "line") {
        cout << "Command \"line\" is used to add, read or delete Lines. " << endl;
        cout << "Syntax: " << endl;
        cout << "Add new Line: \t\tline add {line_name} {define_mode} {args}" << endl;
        cout << "\tDefine Modes: \t2p(Use 2 Points), 2v(in Mx + B Format), 3v(in Ax + By = C Format)" << endl;
        cout << "\tArgs: \t\tName of 2 Points(2p Mode), M and B(2v Mode), or A, B and C(3v Mode)" << endl;
        cout << "Read a Line: \t\tline read {line_name}" << endl;
        cout << "Delete a Line: \t\tline del {line_name}" << endl;
    } else if(command == "calc") {
        cout << "Command \"calc\" is used to Calculate if 2 lines are Parallel or Coincident, " << endl;
        cout << "or get the X, Y intercept, Slope, or Point of Intersect of Line(s)" << endl;
        cout << "Syntax: " << endl;
        cout << "Parallel: \t\tcalc para {line_name} {line_name}" << endl;
        cout << "Coincident: \t\tcalc coin {line_name} {line_name}" << endl;
        cout << "X/Y Intercept: \t\tcalc {xint/yint} {line_name}" << endl;
        cout << "Slope: \t\t\tclac slop {line_name}" << endl;
        cout << "POIntersect: \t\tcalc intc {line_name} {line_name}" << endl;
    } else if(command == "exit") {
        cout << "Command \"eixt\" is used to Exit the Program. " << endl;
    } else {
        UnknownCommand(command);
    }
}

int main(){
    PointList pList(Point(0, 0));
    LineList lList(Line(0, 0, 0));
    for(CommandLine cmd("Welcome! ", "# ", 7, ' '); cmd.inputs[0] != "exit"; cmd.getInput()) {
        string command = cmd.inputs[0];
        if(command == "") {
            continue;
        } else if(command == "debug") {
            continue; //Breakpoint
        } else if(command == "help") {
            printDoc(cmd.inputs[1]);
        } else if(command == "point") {
            if (cmd.inputs[1] == "read") {
                if (pList.getIndex(cmd.inputs[2]) == -1) ObjectNotFound(cmd.inputs[2]);
                else cout << pList.get(cmd.inputs[2]).describe() << endl;
            } else if (cmd.inputs[1] == "add") {
                Point buffer;
                if (SAble2I(cmd.inputs[3]) && SAble2I(cmd.inputs[4])) {
                    buffer = Point(stoi(cmd.inputs[3]), stoi(cmd.inputs[4]));
                } else {
                    syntaxError(command);
                    continue;
                }
                if(pList.add(cmd.inputs[2], buffer)) cmdSuccess();
                else addError();
            } else if (cmd.inputs[1] == "del") {
                if(pList.del(cmd.inputs[2])) cmdSuccess();
                else ObjectNotFound(cmd.inputs[2]);
            } else syntaxError(command);
        } else if(command == "line") {
            if (cmd.inputs[1] == "read") {
                if (lList.getIndex(cmd.inputs[2]) == -1) ObjectNotFound(cmd.inputs[2]);
                else cout << lList.get(cmd.inputs[2]).describe() << endl;
            } else if (cmd.inputs[1] == "add") {
                string lineMod = cmd.inputs[3];
                Line buffer;
                if (lineMod == "2p") {
                    buffer = Line(pList.get(cmd.inputs[4]), pList.get(cmd.inputs[5]));
                } else if (lineMod == "2v" && SAble2I(cmd.inputs[4]) && SAble2I(cmd.inputs[5])) {
                    buffer = Line(stoi(cmd.inputs[4]), stoi(cmd.inputs[5]));
                } else if (lineMod == "3v" && SAble2I(cmd.inputs[4]) && SAble2I(cmd.inputs[5]) && SAble2I(cmd.inputs[6])) {
                    buffer = Line(stoi(cmd.inputs[4]), stoi(cmd.inputs[5]), stoi(cmd.inputs[6]));
                } else {
                    syntaxError(command);
                    continue;
                }
                if(lList.add(cmd.inputs[2], buffer)) cmdSuccess();
                else addError();
            } else if (cmd.inputs[1] == "del") {
                if(lList.del(cmd.inputs[2])) cmdSuccess();
                else ObjectNotFound(cmd.inputs[2]);
            } else syntaxError(command);
        } else if(command == "calc") {
            if (cmd.inputs[1] == "para") {
                if (lList.getIndex(cmd.inputs[2]) != -1 && lList.getIndex(cmd.inputs[3]) != -1) {
                    if (lList.get(cmd.inputs[2]).isParallel(lList.get(cmd.inputs[3]))) cout << "Parallel: Ture";
                    else cout << "Parallel: False";
                    cout << endl;
                } else {
                    if (lList.getIndex(cmd.inputs[2]) == -1) ObjectNotFound(cmd.inputs[2]);
                    if (lList.getIndex(cmd.inputs[3]) == -1) ObjectNotFound(cmd.inputs[3]);
                }
            } else if (cmd.inputs[1] == "coin") {
                if (lList.getIndex(cmd.inputs[2]) != -1 && lList.getIndex(cmd.inputs[3]) != -1) {
                    if (lList.get(cmd.inputs[2]).isConcident(lList.get(cmd.inputs[3]))) cout << "Concident: Ture";
                    else cout << "Concident: False";
                    cout << endl;
                } else {
                    if (lList.getIndex(cmd.inputs[2]) == -1) ObjectNotFound(cmd.inputs[2]);
                    if (lList.getIndex(cmd.inputs[3]) == -1) ObjectNotFound(cmd.inputs[3]);
                }
            } else if (cmd.inputs[1] == "xint") {
                if (lList.getIndex(cmd.inputs[2]) != -1) {
                    cout << "X-Intercept: ";
                    cout << lList.get(cmd.inputs[2]).xInt();
                    cout << endl;
                }
            } else if (cmd.inputs[1] == "yint") {
                if (lList.getIndex(cmd.inputs[2]) != -1) {
                    cout << "Y-Intercept: ";
                    if (lList.get(cmd.inputs[2]).b == 0) cout << "Undefined";
                    else cout << lList.get(cmd.inputs[2]).yInt();
                    cout << endl;
                }
            } else if (cmd.inputs[1] == "slop") {
                if (lList.getIndex(cmd.inputs[2]) != -1) {
                    cout << "Slope: ";
                    if (lList.get(cmd.inputs[2]).b == 0) cout << "Undefined";
                    else cout << lList.get(cmd.inputs[2]).slope();
                    cout << endl;
                }
            } else if (cmd.inputs[1] == "intc") {
                if (lList.getIndex(cmd.inputs[2]) != -1 && lList.getIndex(cmd.inputs[3]) != -1) {
                    if (lList.get(cmd.inputs[2]).isParallel(lList.get(cmd.inputs[3]))) cout << "No Intersect Point" << endl;
                    else cout << lList.get(cmd.inputs[2]).intersect(lList.get(cmd.inputs[3])).describe() << endl;
                } else {
                    if (lList.getIndex(cmd.inputs[2]) == -1) ObjectNotFound(cmd.inputs[2]);
                    if (lList.getIndex(cmd.inputs[3]) == -1) ObjectNotFound(cmd.inputs[3]);
                }
            }
        } else UnknownCommand(command);
    }
}
