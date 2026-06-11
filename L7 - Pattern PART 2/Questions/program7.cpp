/*WAP to print the following pattern, if n = 5, then: 
    1   2   3   4   5
    1   2   3   4
    1   2   3
    1   2
    1

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
        
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
It can also be implemented using the following approach: 

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

*/