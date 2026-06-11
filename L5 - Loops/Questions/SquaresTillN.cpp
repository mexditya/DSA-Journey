//WAP to print squares of n numbers from 1

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;
    
    for(int i = 1; i <= num ; i++) {
        cout << i*i << endl;
    }
    return 0;
}