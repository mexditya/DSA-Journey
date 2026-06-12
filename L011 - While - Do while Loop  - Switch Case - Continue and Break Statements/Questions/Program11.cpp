//Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

#include <iostream>
using namespace std;

int main() {
    char series1 = 'A', series2 = 'a';

    cout << "\nCapital Letters: ";
    while(series1 <= 'Z') {
        cout << series1 << " ";
        series1++;
    }

    cout << "\nSmall Letters: ";
    while(series2 <= 'z') {
        cout << series2 << " ";
        series2++;
    }

    return 0;
}