//WAP to create a function to find the cube of a number

#include <iostream>
using namespace std;


int cube(int num) {
    int cube = num * num * num;
    return num;
}

int main() {
    int num; 
    cout << "Enter the number: ";
    cin >> num;

    cout << "Cube: " << cube(num) << endl;
    return 0;
}