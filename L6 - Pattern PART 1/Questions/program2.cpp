/* WAP to print the following pattern, if n = 5, then: 
    10  10  10  10  10
    10  10  10  10  10
    10  10  10  10  10
    10  10  10  10  10
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "10 ";
        }
        cout << endl;
    }
    return 0;
}

