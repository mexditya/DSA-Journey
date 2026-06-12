//Find the factorial of a number n using a while loop and do a while loop.

#include <iostream>
using namespace std;

int main() {
    int n, i = 1, fact = 1;
    cin >> n;

    while (i <= n) {
        fact *= i;
        i++;
    }
    cout << "Factorial (Using While): " << fact << endl;

    fact = 1, i = 1;
    do{
        fact *= i;
        i++;
    } while (i <= n);
    cout << "Factorial (Using Do-While): " << fact << endl;

    return 0;


}