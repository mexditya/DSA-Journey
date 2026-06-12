//WAP to print all the odd and even numbers between 1 to n

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;

    cout << "ODD Numbers: ";
    while(i <= n) {
        
        if(i % 2 != 0) 
            cout << i << " ";
        i++;
    }

    i = 1;
    cout << endl;

    cout << "EVEN Numbers: ";
    while(i <= n) {
        
        if(i % 2 == 0) 
            cout << i << " ";
        i++;
    }


    
}