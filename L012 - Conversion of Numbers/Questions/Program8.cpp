//Write a program to convert Octal numbers to decimal numbers.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int rem, ans = 0, multi = 1;
    while(num != 0) {
        rem = num % 10;
        num /= 10;
        ans += rem * multi;
        multi *= 8;
    }

    cout << "Decimal Equivalent: " << ans << endl;
    return 0;
}