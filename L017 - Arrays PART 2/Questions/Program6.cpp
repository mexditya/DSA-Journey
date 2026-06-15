//WAP to rotate an integer array of length n by 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cout << "Enter the length of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    //ARRAY ROTATION is always done by shifting right to left, NOT LEFT TO RIGHT
    int temp = arr[n-1];
    for(int i = n - 1; i >= 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    cout << "\nArray after rotation: "; 
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}