#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int n1, n2, n3, n4, c;
    n4 = n / 1000;
    n3 = n % 1000 / 100;
    n2 = n % 1000 % 100 / 10;
    n1 = n % 1000 % 100 % 10;

    c = n4;
    if (c == 1) {
        cout<<"One";
    } else if (c == 2) {
        cout<<"Two";
    } else if (c == 3) {
        cout<<"Three";
    } else if (c == 4) {
        cout<<"Four";
    } else if (c == 5) {
        cout<<"Five";
    } else if (c == 6) {
        cout<<"Six";
    } else if (c == 7) {
        cout<<"Seven";
    } else if (c == 8) {
        cout<<"Eight";
    } else if (c == 9) {
        cout<<"Nine";
    }
    if (c != 0) {
        cout<<" Thousand ";
    }
    
    c = n3;
    if (c == 1) {
        cout<<"One";
    } else if (c == 2) {
        cout<<"Two";
    } else if (c == 3) {
        cout<<"Three";
    } else if (c == 4) {
        cout<<"Four";
    } else if (c == 5) {
        cout<<"Five";
    } else if (c == 6) {
        cout<<"Six";
    } else if (c == 7) {
        cout<<"Seven";
    } else if (c == 8) {
        cout<<"Eight";
    } else if (c == 9) {
        cout<<"Nine";
    }
    if (c != 0) {
        cout<<" Hundred ";
    }

    c = n2;
    if (c == 1) {
        c = n1;
        if (c == 0) {
           cout<<"Ten";
        } else if (c == 1) {
            cout<<"Eleven";
        } else if (c == 2) {
            cout<<"Twelve";
        } else if (c == 3) {
            cout<<"Thirteen";
        } else if (c == 4) {
            cout<<"Fourteen";
        } else if (c == 5) {
            cout<<"Fifteen";
        } else if (c == 6) {
            cout<<"Sixteen";
        } else if (c == 7) {
            cout<<"Seventeen";
        } else if (c == 8) {
            cout<<"Eighteen";
        } else if (c == 9) {
            cout<<"Nineteen";
        }
        c = 0;
    } else if (c == 2) {
        cout<<"Twenty";
    } else if (c == 3) {
        cout<<"Thirty";
    } else if (c == 4) {
        cout<<"Forty";
    } else if (c == 5) {
        cout<<"Fifty";
    } else if (c == 6) {
        cout<<"Sixty";
    } else if (c == 7) {
        cout<<"Seventy";
    } else if (c == 8) {
        cout<<"Eighty";
    } else if (c == 9) {
        cout<<"Ninety";
    }
    cout<<" ";

    if (n2 != 1) {
        c = n1;
        if (c == 1) {
            cout<<"One";
        } else if (c == 2) {
            cout<<"Two";
        } else if (c == 3) {
            cout<<"Three";
        } else if (c == 4) {
            cout<<"Four";
        } else if (c == 5) {
            cout<<"Five";
        } else if (c == 6) {
            cout<<"Six";
        } else if (c == 7) {
            cout<<"Seven";
        } else if (c == 8) {
            cout<<"Eight";
        } else if (c == 9) {
            cout<<"Nine";
        }
    }
}