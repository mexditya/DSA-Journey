//Reverse a number n using Function, Constraints: -5000<=n<=5000


#include <iostream>
using namespace std;

int reverse(int num) {
    int reverse = 0, ld;

    while(num != 0) {
        ld = num % 10;
        num /= 10;
        reverse = reverse * 10 + ld;
    }
    return reverse;
}

int main(){
    int num;
    cout << "Enter the number(-5000 to 5000): ";
    cin >> num;

    if(num > 5000 || num < -5000) {
        cout << "Input not in the given range." << endl;
        return 0;
    }

    cout << "Reversed Value: " << reverse(num) << endl;
    return 0;
}