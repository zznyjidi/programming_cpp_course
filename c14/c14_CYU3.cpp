#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;


class Light {
// Variables that will be initialized in the Light constructors.
public:
    bool on;
    bool burntOut;
    string color = "";

// Default constructor that sets the bulb to on, not burnt out, and "white".
public:

//    string toLowerCase(string input) {
//        string lowercase = "";
//        for (int i = 0; i < input.length(); i++) {
//            lowercase += tolower(input[i]);
//        }
//        return lowercase;
//    }

    Light() {
        on = true;
        burntOut = false;
        color = "white";
    }

// This constructor sets the variable "on" to the parameter o. The burntOut
// variable is set to the parameter b. If burntOut
// is true, on is set to false, no matter what value is stored in o.
// The color variable is set to the parameter c only if c is "red", "green"
// or "blue". The constructor ignores the case of the value in c. If c holds
// any value other than "red", "green" or "blue", the constructor sets
// color to "white".
    Light(bool o, bool b, string c) {
        on = o;
        burntOut = b;
//        c = toLowerCase(c);
        if (c == "red" || c == "green" || c == "blue") color = c;
        else color = "white";
    }

// The printLight method print the Light in the format:
// off red    burnt out
// on green    not burnt out
//
// Notice there is one space between "off"/"on" and the value for color,
// and a tab before the "burnt out" or "not burnt out".
    void printLight () {
        if(on) {
            cout << "on\t";
        } else {
            cout << "off\t";
        }
        cout << color << "\t";
        if(burntOut) {
            cout << "burnt out";
        } else {
            cout << "not burnt out";
        }
        cout << endl;
    }

// This method changes the bulb from on to off, or visa versa. If the
// burntOut variable is true, then the on variable may only be set to false.
    void flip() {
        if(on) {
            on = false;
        } else {
            on = true;
        }
    }

// The getColor method returns the color of the bulb. 
    string getColor()
    {
        /* missing code (don't forget to update the return statement) */
        return color;
    }

// The setColor method sets the color of the Light. The color variable is
// set to c only if c is "red", "green" or "blue". The method ignore the
// case of the value in c. If c holds any value other than "red", "green"
// or "blue", color will be set to "white".
    void setColor(string c) {
        if (c == "red" || c == "green" || c == "blue") color = c;
        else color = "white";
    }

// The isOn method returns true if on, false otherwise.
    bool isOn() {
        /* missing code (don't forget to update the return statement) */
        return on;
    }

// The burnOut method sets the variable burntOut to true.
    void burnOut() {
        burntOut = true;
    }
};

int main() {
  Light L1(true, false, "red");
  Light L2(true, false, "green");
  L1.printLight();
  L2.printLight();
}
