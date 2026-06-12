//WAP to convert decimal to octal number system

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the decimal number: "; 
    cin >> num;

    int remainder, ans = 0, multi = 1;

    while(num != 0) {
        remainder = num %8;
        num /= 8;
        ans += remainder * multi;
        multi *= 10; //When converting to decimal, multiply by the existing(Pehle wala source) base (meaning multi *= exsting base); when converting from decimal, build the answer with powers of 10(meaning multi *= 10).
    }

    cout << "Octal Form: " << ans << endl;
    return 0;
}