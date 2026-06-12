//WAP to convert integer to binary

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int rem, ans = 0, multi = 1;

    while(n != 0) {
        rem = n % 2;
        n /= 2;

        ans += rem * multi;
        multi *= 10;
    }

    cout << "Binary Form: " << ans << endl;
    return 0;
}