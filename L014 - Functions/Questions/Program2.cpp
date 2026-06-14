//WAP to create a function to print the sum of two numbers

#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main() {
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    cout << "Sum: " << sum(a , b) << endl;
    return 0;
}