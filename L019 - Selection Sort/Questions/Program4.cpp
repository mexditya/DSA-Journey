/*
Selection Sort Algorithm to sort the array of char in ascending order.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cout << "Enter the length of the array: ";
    cin >> n;

    char arr[n];

    cout << "Enter " << n << " characters: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++) {
        int smallest = i;
        
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[smallest])
                smallest = j;
        }

        swap(arr[smallest], arr[i]);
    }

    cout << "Sorted Character Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}