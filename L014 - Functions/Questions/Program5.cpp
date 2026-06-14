//WAP to swap two numbers using a function

#include  <iostream>
using namespace std;

void swap_num(int &a, int &b) {     //& is used to perform CALL BY REFERENCE so that actial changes can be made
    int temp = a;                                //in the main() funtion.
    a = b;
    b = temp;
}


int main() {
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    cout << "Before Swapping a: " << a << " b: " << b << endl;

    swap_num(a, b);

    cout << "After swapping a: " << a << " b: " << b << endl;
    return 0;
}