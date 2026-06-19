/*
Write a C++ program to implement the Selection Sort algorithm and sort an array of integers in decreasing (descending) order. 
Take the array elements as input from the user and display the sorted array after applying Selection Sort.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " Elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        int biggest = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] > arr[biggest]){
                biggest = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[biggest];
        arr[biggest] = temp;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}