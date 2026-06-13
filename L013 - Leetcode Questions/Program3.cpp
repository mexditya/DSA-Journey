/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned

*/

#include <iostream>
#include <climits>   //REQUIRED to use INT_MAX and INT_MIN
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int ld, reverse_num = 0;

    while(num != 0) {
        ld = num % 10;

        // Positive overflow
        if (reverse_num > INT_MAX / 10) {
            cout << 0;
            return 0;
        }

        // Negative overflow
        if (reverse_num < INT_MIN / 10) {
            cout << 0;
            return 0;
        }

        reverse_num = reverse_num * 10 + ld;
        num /= 10;
    }

    /*
    Now to handle the overflow condtion, we will use INT_MAX and INT_MIN

    We have to return 0 when, reverse_num * 10 + ld > INT_MAX 
    or 
    reverse_num * 10 + ld < INT_MIN
    So, 
        reverse_num should not be greater than  INT_MAX - ld   and it should not be smaller than INT_MIN - ld
                                                -------------                                    -------------
                                                     10                                                10
    We know that ld will always be between 0 - 9 and if we split the denominator(10) to both INT_MAX and ld, then
    the value of ld becomes 0, because even if it is 9, then 9 / 10 = 0.9 which is 0 in integer. 

    so we can say that overflow condition will be applied when:

    reverse_num > (INT_MAX /10)   or    reverse_num < (INT_MIN / 10)
    
                                                     */

    
    
    return 0;
}