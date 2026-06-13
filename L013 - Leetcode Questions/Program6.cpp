//Given an integer x, return true if x is a palindrome, and false otherwise.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int original_num = num;

    if(num < 0) {
        cout << "Not a Palindrome Number" << endl;
        return 0;
    }

    int reversed_num = 0, ld;

    while(num != 0){
        ld = num % 10;

        //OVERFLOW CHECK
        if(reversed_num > INT_MAX / 10) {
        cout << "OVERFLOW!";
        return 0;
        }   

        reversed_num = reversed_num * 10 + ld;
        num /= 10;
    }

    if((reversed_num) == original_num) 
        cout << "Palindrome Number" << endl;
    else    
        cout << "Not a Palindrome Number" << endl;
    return 0;

}