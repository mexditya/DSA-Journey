//WAP to print the table of a number

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;

    cout << "Table: " << endl;

    while(i <= 10) {
        cout << n*i << endl;
        i++;
    }
    return 0;
}