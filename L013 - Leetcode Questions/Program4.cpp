/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(num <= 0) {
        cout << "False";
        return 0;
    }
    
    int value = 1;

    while (value <= num) {
        if(value == num){
            cout << "True";
            return 0;
        }   
        value *= 2;
    }

    cout << "False";
    return 0;

}