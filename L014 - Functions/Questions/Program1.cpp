//WAP to create functions to check for prime number and to find the factorial.

#include <iostream>
using namespace std;


bool prime(int num) {
    if(num <= 1) {
        return 0;
    }

    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int factorial(int num) {
    int fact = 1;
    for(int i = 2; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num; 

    cout << "Is number prime(0 -> False & 1 -> True): " << prime(num) << endl;
    cout << "Factorial: " << factorial(num) << endl;

    return 0;
}