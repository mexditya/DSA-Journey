//WAP to print even numbers from 1 to n;
 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 2; i <= n; i++){
        if(i % 2 == 0)
            cout << i << endl;
    }

    return 0;
}