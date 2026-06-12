/*WAP To Print The Following Pattern, For N = 4: 

*                           *
*   *                   *   *
*   *   *           *   *   *
*   *   *   *   *   *   *   *
*   *   *           *   *   *
*   *                   *   *
*                           *

*/

#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    for(int i = 1; i <= n; i++) {

        //Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        //Spaces
        for(int k = 1; k <= 2*(n-i); k++) {
            cout << "  ";
        }

        //Stars
        for(int l = 1; l <= i; l++) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = n-1; i >= 1; i--) {
        //Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        //Spaces
        for(int k = 1; k <= 2*(n - i); k++) {
            cout << "  ";
        }

        //Stars
        for(int l = 1; l <= i; l++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}