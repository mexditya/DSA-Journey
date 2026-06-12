//WAP to convert Binary to decimal

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the binary number: ";
    cin >> num;

    int rem, ans = 0, multi = 1;    //Multi 1 se shuru hoga kyu ki 2^0 = 1 hota hai
    while (num != 0) {
        rem = num % 10;
        num /= 10;

        ans += rem * multi;
        multi *= 2;
    }

    cout << "Decimal Number: " << ans << endl;
    return 0;
}