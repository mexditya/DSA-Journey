//WAP to check if A is greater than B

#include <iostream> 
using namespace std;

int main() {
    int A, B;
    cout << "Enter the value of A and B: ";
    cin >> A >> B;
    if(A > B)
        cout << "Yes";
    else if(A < B)
        cout << "No";
    else
        cout << "Equal";
    return 0;
}