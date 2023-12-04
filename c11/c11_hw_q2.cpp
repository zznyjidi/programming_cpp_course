#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int sLength = s.length();
    if ((sLength == 1) || (s == "")) {
        return true;
    } else if (s[0] == s[sLength - 1]) {
        return isPalindrome(s.substr(1, sLength - 2));
    } else {
        return false;
    }
}

int main() {
    cout<<isPalindrome("radar")<<endl;
    cout<<isPalindrome("noon")<<endl;
    cout<<isPalindrome("n")<<endl;
    cout<<isPalindrome("elephant")<<endl;
}
