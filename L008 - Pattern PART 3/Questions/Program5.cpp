/*  WAP to print the following pattern, if n = 5: 
                1
            2   1
        3   2   1
    4   3   2   1
5   4   3   2   1

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        //Spaces
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        //Numbers
        for(int k = i; k >= 1; k--) {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}