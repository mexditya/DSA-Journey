//WAP to find the sum of sqares of n natural numbers

#include <iostream>
using namespace std;

int main() {
    int num, ans = 0;
    cout << "Enter the value of number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        ans += (i*i);
    }
    cout << "SUM: " << ans << endl;

    return 0;
}