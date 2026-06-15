//WAP to reverse an array without using an extra array

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    //Taking elements input in the array
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Reversing the given array
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 

    return 0;

}