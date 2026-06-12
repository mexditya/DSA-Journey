//WAP to print numbers from 1 to n in intervals of 3

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i <= n ; i += 3){
        cout << i << endl;
    }
    return 0;
}