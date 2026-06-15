/*
WAP to find the Fibonacci number at a given position in a Fibonacci series
(first element = 0, second element = 1) of length n (where n >= 2).

Generate the series using an array and display the element at the required
position as soon as it is computed.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cout << "Enter the length of the series: ";
    cin >> n;

    int arr[n], target;

    cout << "Enter the required position: ";
    cin >> target;

    if(target < 1 || target > n) {
        cout << "Invalid Position!" << endl;
        return 0;
    }

    //Declaring the first and second element of array
    arr[0] = 0;
    arr[1] = 1;
    int pos = 2;


    if(target == 1)
        cout << "Element at position 1: " << arr[0] << endl;
    else if(target == 2)
        cout << "Element at position 2: " << arr[1] << endl;

    for(int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
        pos++;
        if(pos == target){
            cout << "Element at " <<"position " << target << ": " << arr[i] << endl;
            break;
        }
    }
    
    return 0;
}