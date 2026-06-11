/*  WAP to print the following pattern for n  = 4: 

      *
    *   *
  *   *   *   
*   *   *   *
*   *   *   *
  *   *   *
    *   *
      *

*/

#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    for(int i = 1; i <= n; i++) {
        
        //Spaces
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }

        //Stars
        for(int k = 1; k <= i; k++) {
            cout << "* ";
        }

        cout << endl;
    }

    for(int i = n; i >= 1; i--) {
        
        //Spaces
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }

        //Stars
        for(int k = 1; k <= i; k++) {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}