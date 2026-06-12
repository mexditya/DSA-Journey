//WAP to print the days of a week using the switch case

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Day Number: ";
    cin >> n;

    switch (n) 
    {
        case 1: 
            cout << "Monday" << endl;
            break;
        
        case 2: 
            cout << "Tuesday" << endl;
            break;

        case 3: 
            cout << "Wednessday" << endl;
            break;

        case 4: 
            cout << "Thursday" << endl;
            break;

        case 5: 
            cout << "Friday" << endl;
            break;

        case 6: 
            cout << "Saturday" << endl;
            break;

        case 7: 
            cout << "Sunday" << endl;
            break;
    }
}