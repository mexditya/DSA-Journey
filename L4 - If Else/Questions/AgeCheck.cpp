//WAP to input age and tell if an individual is adult or not

#include <iostream>
using namespace std;

int main() {
    double age;
    cout << "Enter the age: ";
    cin >> age;

    if(age < 1 && age > 0) 
        cout << "Baby" << endl;
    else if(age >= 1 && age < 3)
        cout << "Toddler" << endl;
    else if(age >= 3 && age <= 12)
        cout << "Child" << endl;
    else if(age >= 13 && age < 18)
        cout << "Teenager" << endl;
    else if(age >= 18)
        cout << "Adult" << endl;
    else
        cout << "Invalid Input" << endl;
    
    return 0;

}