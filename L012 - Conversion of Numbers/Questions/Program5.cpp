//Write a program to convert binary numbers to decimal numbers using a for loop

#include <iostream>
using namespace std;

int main() {
    int num; 
    cout << "Enter the binary number: ";
    cin >> num;

    int rem, ans = 0, multi = 1;
    for(int i = 1; num != 0; i++) {     // We can also use : for(; num != 0; ) , since i is not completely used here
        rem = num % 10;
        num /= 10;
        ans += rem * multi;
        multi *= 2;
    }

    cout << "Decimal Equivalent: " << ans << endl;
    return 0;
}