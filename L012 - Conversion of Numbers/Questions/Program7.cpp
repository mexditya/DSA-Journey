//Write a program to convert decimal numbers to Octal numbers.

#include <iostream>
using namespace std;

int main() {
    int num; 
    cout << "Enter the decimal number: ";
    cin >> num;

    int rem, ans = 0, multi = 1;
    for(; num != 0;) {
        rem = num % 8;
        num /= 8;
        ans += rem * multi;
        multi *= 10;
    }

    cout << "Octal Equivalent: " << ans << endl;
    return 0;
}