//Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;

    while (i <= n) {
        if(i % 3 == 0 || i % 5 == 0) {
            i++;                            // i++ Before continue is important, because when i is divisible by 3 or 5, it will not increment the i, if i++ is not used before continue
            continue;
        }
            
        cout << i << " ";
        i++;
    }

    return 0;
}