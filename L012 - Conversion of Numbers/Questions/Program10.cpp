//Write a program to convert Octal numbers to binary numbers

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the octal number: ";
    cin >> num;

    //Octal to decimal conversion
    int rem, ans = 0, multi = 1;
    while(num != 0) {
        rem = num % 10;
        num /= 10;
        ans += rem * multi;
        multi *= 8;
    }

    int num2 = ans;

    //Decimal to binary conversion
    int rem2, ans2 = 0, multi2 = 1;
    while(num2 != 0) {
        rem2 = num2 % 2;
        num2 /= 2;
        ans2 += rem2 * multi2;
        multi2 *= 10;
    }

    cout << "Binary Equivalent: " << ans2 << endl;
    return 0;
}