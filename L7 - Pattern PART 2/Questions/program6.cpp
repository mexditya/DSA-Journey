/*WAP to print the following pattern, if n = 5, then: 
    *   *   *   *   *
    *   *   *   *
    *   *   *
    *   *
    * 

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
It can also be implemented usign the following approach: 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << "* ";
        }
            cout << endl;
    }

*/