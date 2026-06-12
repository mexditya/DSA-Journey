/* WAP TO PRINT THE FOLLOWING PATTERN, IF N = 5:
                A
            A   B
        A   B   C
    A   B   C   D
A   B   C   D   E

*/

#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    for(int i = 1; i <= n; i++) {
        //Spaces
        for(int j = 1; j <= n-i; j ++) {
            cout << "  ";
        }

        //Alphabets
        for(int k = 65; k < i+65; k++) {
            cout << (char)k << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
    An other approach for printing characters is: 

    for(char name = 'A'; name <= 'A' + row-1; name++) {
        cout << name << " ";
    }
*/