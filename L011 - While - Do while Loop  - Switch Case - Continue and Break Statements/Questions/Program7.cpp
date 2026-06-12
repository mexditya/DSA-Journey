//Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;

    cout << "\nEven Numbers(Using While): ";
    while (i <= n) {
        if(i % 2 == 0) 
            cout << i << " ";
        i++;
    }

    i = 1;
    cout << "\nEven Numbers(Using Do While): ";
    do{
        if(i % 2 == 0)
            cout << i << " ";
        i++;
    } while (i <= n);

    return 0;


}