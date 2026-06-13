/*
WAP to find the complement of a base 10 non-negative integer

The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the integer: ";
    cin >> num;

    if(num == 0) {
    cout << "Complemented Integer Value: 1" << endl;
    return 0;
    }       

    //DECIMAL to Binary Conversion;

    int rem, ans = 0, multi = 1;
    while(num != 0){
        rem = num % 2;
        num /= 2;

        ans += rem * multi;
        multi *= 10;
    }

    int binary_num = ans;

    //Complement
    int complement_num = 0, remainder, multi2 = 1;
    while(binary_num != 0) {
        remainder = binary_num % 10;
        binary_num /= 10;

        if(remainder == 0)
            remainder = 1;
        else 
            remainder = 0;

        complement_num += remainder * multi2;
        multi2 *= 10;
    }
    /*
    cout << "Complemented Integer Value: " << (int)complement_num << endl; 

    Printing complement_num directly will not give the correct answer.

    Example:
    5 -> 101 (binary)
    Complement -> 010

    complement_num stores 010 as the integer 10, not as decimal 2.

    Therefore, we must convert the complemented binary number
    back to decimal before printing the final answer.
    */

    //BINARY To DECIMAL

    int rem3, ans3 = 0, multi3 = 1;
    while(complement_num != 0) {
        rem3 = complement_num % 10;
        complement_num /= 10;

        ans3 += rem3 * multi3;
        multi3 *= 2;
    } 

    cout << "Complemented Integer Value: " << ans3 << endl;
    
    return 0;
}