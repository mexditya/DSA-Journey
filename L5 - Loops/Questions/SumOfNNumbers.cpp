//WAP to find the sum of n natural numbers

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i <= n ; i++){
        sum += i;
    }
    
    cout << "SUM: " << sum << endl;
    return 0;
}

/*Formula for Sum of n natural numbers is: n (n + 1)
                                           ----------
                                                2       */