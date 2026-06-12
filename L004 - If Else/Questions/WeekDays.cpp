//WAP to print the days of the week by taking number as input, ex: 1 --> Monday

#include <iostream>
using namespace std;

int main () {
    int day;
    cout << "Enter the day number: ";
    cin >> day;

    if(day == 1)
        cout << "Monday" << endl;
    else if(day == 2)
        cout << "Tuesday" << endl;
    else if(day == 2)
        cout << "Wednessday" << endl;
    else if(day == 2)
        cout << "Thrusday" << endl;
    else if(day == 2)
        cout << "Friday" << endl;
    else if(day == 2)
        cout << "Saturday" << endl;
    else if(day == 2)
        cout << "Sunday" << endl;
    else
        cout << "Invalid Input!" << endl;
    return 0;
}