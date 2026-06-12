//WAP to calculate the power of a number;

#include <iostream>
using namespace std;

int main() {
    int num, power, answer = 1;     //Initializing the variable "answer" before use in calculation is important.
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the power: ";
    cin >> power;

    for(int i = 1 ; i <= power ; i++) {
        answer *= num;
    }

    cout << "Answer: " << answer << endl;
    return 0;
}