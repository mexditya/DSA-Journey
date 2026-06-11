/*WAP to print the following pattern, if n = 5, then: 
    a   a   a   a   a
    b   b   b   b   b
    c   c   c   c   c
    d   d   d   d   d
    e   e   e   e   e
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if(n > 26 || n < 1) {
        cout << "Invalid Input, Enter Between 1 - 26" << endl;
        return 0;
    }

    else {
        for(int i = 97; i < 97+n; i++) {
            for(int j = 1; j <= n; j++) {
                cout << (char)i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}


/*
It can also be implemented using: 

    for(char ch = 'a'; ch < 'a' + n; ch++) {
    for(int j = 1; j <= n; j++) {
        cout << ch << " ";
    }
    cout << endl;
  }


*/