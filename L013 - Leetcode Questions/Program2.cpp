/*
You are given an Integer n. Return true if It is a Leap Year otherwise return false.
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if(year % 400 == 0) 
        cout << "Leap Year";
    else if(year % 4 == 0 && year % 100 != 0) 
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";
    return 0;
}