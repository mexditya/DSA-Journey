/*WAP TO PRINT THE PATTERN IF N = 5:
                    *
                *   *
            *   *   *
        *   *   *   *    
    *   *   *   *   *

*/

#include <iostream>
using namespace std;

int main() {                //3 LOOPS LAG RAHE HAIN, HE BHAGWAAANN!!!!!
    int n; 
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n- i; j++) {    //PRINTING SPACE
            cout << "  ";       // To Equate with Stars, we add two spaces
        }
        
        for(int k = 1; k <= i; k++) {       //PRINTING STARS
            cout << "* ";       //STAR and a Space Occupies Two Characters
        }
        cout << endl;
    }
        
    return 0;
}

//Agar Space Denge to dono me denge, nhi to kisi me nhi denge. 
