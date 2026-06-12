/*WAP to print the following pattern, if n = 5: 

*   *   *   *   *   *   *   *   *
    *   *   *   *   *   *   *
        *   *   *   *   *
            *   *   *
                *

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n;i >= 1; i--) {
        
        //Spaces
        for(int j = 1; j <= n-i; j++) {
            cout << "  ";
        }

        for(int k = 1; k <= 2*i - 1; k++) {
            cout << "* ";
        }
        cout << endl;
    } 
    
    return 0;
}