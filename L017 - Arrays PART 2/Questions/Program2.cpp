//WAP to reverse an array

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr1[n], arr2[n];

    //Taking elements input in array
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[n-i-1] = arr1[i];
    }
    
    cout << "Array Before Reversing: ";
    for(int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\n";
    
    //Reversing the original array
    for(int i = 0; i <n; i++) {
        arr1[i] = arr2[i];
    }

    cout << "Array After Reversing: ";
    for(int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    return 0;


}