//WAP to print the table of a number

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for(int i = num ; i <= num*10 ; i += num) {
        cout << i << endl;
    }

    return 0;
}