#include <iostream>
using namespace std;

string mySubString(string str, int startIndex, int endIndex) {
    string buffer = "";
    for (int i = startIndex; i < endIndex+1; i++) {
        buffer += str[i];
    }
    return buffer;
}

int main() {
    cout<<mySubString("stephen",1,3)<<endl;
    cout<<mySubString("stephen",1,2)<<endl;
    cout<<mySubString("stephen",1,1)<<endl;
}
