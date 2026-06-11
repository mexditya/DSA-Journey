/*WAP to print the following pattern, if n = 5, then: 
    a
    b   b
    c   c   c
    d   d   d   d
    e   e   e   e
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char c = 'a';

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
    return 0;
}

/*
It can also be implemented using the following logic: 
    
    char c = 'a';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << c + (i -1) << " ";
        }
            cout << endl;
    }


*/