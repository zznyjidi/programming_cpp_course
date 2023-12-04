#include <iostream>
using namespace std;

int main() {
    string input, matcher, buffer;
    //Question 1 - Counting Vowels
    cout << "Q1" << endl;
    matcher = "aeiou";
    int cV = 0, cA = 0, cE = 0, cI = 0, cO = 0, cU = 0;
    getline(cin, input);

    for(int i = 0; i < input.length(); i++) {
        int index = matcher.find(input[i]);
        if(index != -1) {
            cV += 1;
            if(index == 0) cA += 1;
            else if(index == 1) cE += 1;
            else if(index == 2) cI += 1;
            else if(index == 3) cO += 1;
            else if(index == 4) cU += 1;
        }
    }

    cout << "There are " << cV << " Voewls" << endl;
    cout << cA << " A" << endl;
    cout << cE << " E" << endl;
    cout << cI << " I" << endl;
    cout << cO << " O" << endl;
    cout << cU << " U" << endl;

    //Question 2 - Counting Words
    cout << "Q2" << endl;
    matcher = ' ';
    int cWords = 1;
    getline(cin, input);
    buffer = input;

    for(int i = 0; buffer.find(matcher) != -1; buffer = buffer.substr(buffer.find(matcher)+matcher.length())) {
        cWords += 1;
    }

    cout << "There are " << cWords << " words" << endl;

    //Question 3 - Palinfrome
    cout << "Q3" << endl;
    bool isP = true;
    getline(cin, input);

    if(input.length()%2 == 0) {
        for(int i = 0; i < input.length()/2-1; i++) {
            if(input[i] != input[input.length()-1-i]) {
                isP = false;
                break;
            }
        }
    } else {
        for(int i = 0; i < input.length()/2; i++) {
            if(input[i] != input[input.length()-1-i]) {
                isP = false;
                break;
            }
        }
    }

    if(isP) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    //Question 4 - Replace
    cout << "Q4" << endl;
    matcher = "the";
    string replaceTo = "cat", sentence = "";
    getline(cin, input);
    //buffer = input;

    for(buffer = input; buffer.find(matcher) != -1; buffer = buffer.substr(buffer.find(matcher)+matcher.length())) {
        sentence += buffer.substr(0,buffer.find(matcher));
        sentence += replaceTo;
    }
    sentence += buffer;

    cout << sentence << endl;
}
