/*WAP to print the following pattern, if n = 5, then: 
    5   4   3   2   1
    5   4   3   2   1
    5   4   3   2   1
    5   4   3   2   1
    5   4   3   2   1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
we can also follow the following approach: 

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << n - j + 1;
        }
        cout << endl;
    }

*/