/*  WAP to print the following pattern for n = 5: 
                *                           --> 4 Space    ,   1 Stars          Stars Odd Numbers me badh rahe 
            *   *   *                       --> 3 Space    ,   3 Stars          hain
        *   *   *   *   *                   --> 2 Space    ,   5 Stars
    *   *   *   *   *   *   *               --> 1 Space    ,   7 Stars
*   *   *   *   *   *   *   *   *           --> 0 Space    ,   9 Stars

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

        //Stars
        for(int k = 1; k <= 2*i -1; k ++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}