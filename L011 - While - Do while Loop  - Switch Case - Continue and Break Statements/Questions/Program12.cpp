//Give a number n, find if it is prime or not, use a while loop and break here to solve it.

#include <iostream>
using namespace std;

int main() {
    int n, i = 2, flag = 0;
    cin >> n;

    while(i < n) {
        if(n % i == 0) {
            flag++;
            break;
        }
        i++;
    }

    if(flag == 0)
        cout << "Prime" << endl;
    else    
        cout << "Not Prime" << endl;

    return 0;
}