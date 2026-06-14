/*
Swap 2 numbers a, b without using extra variables. Range of 
-10000<=a,b<=100000. 
*/

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    if(a > 100000 || b > 100000 || a < -10000 || b < -10000) {
        cout << "Overflow!" << endl;
        return 0;
    }

    swap (a, b);
    
    cout << "A: " << a << " B: " << b << endl;
    return 0;
}