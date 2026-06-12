//WAP to print number in revers order from n to 1

#include <iostream> 
using namespace std;

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;

    while(num >= 1) {
        cout << num;
        num--;
    }
    return 0;
}