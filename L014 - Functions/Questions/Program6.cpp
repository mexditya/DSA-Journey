/*
There are three numbers a,b,c. 
Put the value of a into b, put value of b into c and put value of c into a. 
Do it using Function.
*/

#include <iostream>
using namespace std;

void swap (int &a, int &b, int &c) {
    int temp = a;
    a = c;
    c = b;
    b = temp;
}

int main() {
    int a, b, c;
    cout << "Enter the three numbers: ";
    cin >> a >> b >> c;

    cout << "Before Swap:\na -> " << a << "\nb -> " << b << "\nc -> " << c << endl;

    swap(a, b, c);

    cout << "After Swap:\na -> " << a << "\nb -> " << b << "\nc -> " << c << endl;

    return 0;
}