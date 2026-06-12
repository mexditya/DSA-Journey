//Write a program to convert binary to Octal numbers

#include <iostream>
using namespace std;

int main() {
    int num; 
    cout << "Enter the binary number: ";
    cin >> num;
    
    //Binary To Decimal Conversion
    int rem, ans = 0, multi = 1;
    for(; num != 0;) {
        rem = num % 10;
        num /= 10;
        ans += rem * multi;
        multi *= 2; 
    }

    int num2 = ans;
    
    //Decimal to Octal
    int rem2, ans2 = 0, multi2 = 1;
    while (num2 != 0) {
        rem2 = num2 % 8;
        num2 /= 8;
        ans2 += rem2 * multi2;
        multi2 *= 10;
    }

    cout << "Octal Equivalent: " << ans2 << endl;
    return 0;
}