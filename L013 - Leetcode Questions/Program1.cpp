//Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

     int sum = 0, ld;
    
    while (num > 9){
        
        sum = 0; // sum must be reset to 0 for every digit-sum iteration, otherwise previous sums accumulate and give wrong results

        while(num != 0){
        ld = num % 10;
        sum += ld;
        num /= 10;
        }
        num = sum;
    }

    cout << num;
    return 0;
}