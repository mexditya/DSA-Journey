//wAP to print numbers from 1 to n, using do while loop

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter the number: ";
    cin >> n;

    do{
        cout << i << endl;
        i++;
    }while(i <= n);

    return 0;
}