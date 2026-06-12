//WAP to convert Binary form to octa form

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;


    int rem, ans = 0, multi = 1;        //Converting to decimal
    while(num != 0) {
        rem = num % 10;
        num /= 10;

        ans += rem * multi;
        multi *= 2;
    }

    int rem2, ans2 = 0, multi2 = 1;     // Decimal to Octal
    while(ans != 0) {
        rem2 = ans % 8;
        ans /= 8;

        ans2 += rem2 * multi2;
        multi2 *= 10;
    }

    cout << "Octal Form: " << ans2 << endl;
    return 0;
}