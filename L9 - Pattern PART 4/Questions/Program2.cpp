/*  WAP to print the following pattern, if n = 5: 
                1
            1   2   1
        1   2   3   2   1
    1   2   3   4   3   2   1
1   2   3   4   5   4   3   2   1

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
        for(int k = 1; k <= (2 * i) - 1; k++) {
            if(k <= i)
                cout << k << " ";
            else {
                cout << (2 * i) - k << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
A second approach to solve this would be: 

for(int i = 1; i <= n; i++) {
    
    for(int j = 1; j <= n- i; j++){        //PRINTS REQUIRED SPACES
        cout << "  "; 
    }

    for(int k = 1; k <= i; k++){        //PRINTS INCREASING SERIES TILL ROW VALUE
        cout << k << " ";
    }

    for(int l = i-1; l >= 1; l--) {         // PRINTS DECREASING SERIES TILL 1
        cout << l << " ";
    }
        cout << endl;
}


*/