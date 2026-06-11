/*WAP to print the following pattern, if n = 5, then: 
    a   b   c   d   e
    a   b   c   d   e
    a   b   c   d   e
    a   b   c   d   e
    a   b   c   d   e
*/

#include <iostream> 
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if(n > 26 || n < 1) {
        cout << "Invalid Input! Enter value between 1 - 26" << endl;
        return 0;
    }

    else {
        for(int i = 1; i <= n; i++) {
        for(int j = 97; j <= 97+n; j++) {
            cout << (char)j << " ";
        }
        cout << endl;
      }
    }

    return 0;

}