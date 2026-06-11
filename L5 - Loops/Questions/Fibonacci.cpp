/*WAP to print the following fibonacci series till n: 
    0   1   1   2   3   5   13  21  34
*/

#include <iostream>
using namespace std;

int main() {
    int first = 0, second = 1, current, n;
    cin >> n;

    if(n >= 1)
        cout << first << " ";
    if(n >= 2)
        cout << second << " ";
    
    for(int i = 3; i <= n; i++) {
        current = first + second;
        first = second; 
        second = current;
        cout << current << " ";
    }

    return 0;
    
    
}