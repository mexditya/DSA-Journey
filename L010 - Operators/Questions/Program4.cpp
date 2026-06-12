//Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the values: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if(a > b || a > c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}