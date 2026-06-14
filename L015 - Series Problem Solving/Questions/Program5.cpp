//WAP to take 4 integers as input and check if a rectangle can be formed. 

//For a valid rectangle if two sides are same, then the other two sides should be same too.
#include<bits/stdc++.h>
using namespace std;

bool rectangle(int a, int b, int c, int d) {
    if(a == b && c == d) 
        return 1;
    else if(a == c && b == d) 
        return 1;
    else if(a == d && b == c)
        return 1;
    else 
        return 0;
}

int main() {
    int a, b, c, d;
    cout << "Enter the 4 sides of the rectangle: ";
    cin >> a >> b >> c >> d;

    if(rectangle(a, b, c, d) == 1)
        cout << "Valid Rectangle" << endl;
    else 
        cout << "Not a Valid Rectangle" << endl;

    return 0;
}