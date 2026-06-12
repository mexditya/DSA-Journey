/*WAP To Print The Following Pattern, if n = 4: 

*   *   *   *   *   *   *   *
*   *   *           *   *   *
*   *                   *   *
*                           *
*   *                   *   *
*   *   *           *   *   *
*   *   *   *   *   *   *   *

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--) {           //PRINTS THE FIRST HALF OF THE PATTERN
        //Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        //Spaces
        for(int k = 1; k <= 2*(n-i); k++) {
            cout << "  ";
        }

        //Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 2; i <= n; i++) {                   //PRINTS THE REMAINING SECOND HALF OF THE PATTERN
        //Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        //Spaces
        for(int k = 1; k <= 2*(n-i); k++) {
            cout << "  ";
        }

        //Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}