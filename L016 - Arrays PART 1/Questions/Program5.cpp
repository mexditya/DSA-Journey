/*
Find the index of a specific element in an array, if the element is nor present, print -1. 
Ask the size of the array from the user and then implement it.
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

    int num;
    cout << "Enter the element to search: ";
    cin >> num;
    
    for(int i = 0; i < n; i++) {
        if (arr[i] == num) {
            cout << "Element " << num << " found! at index " << i << endl;
            return 0;
        }
    }
    cout << "Element Not Found!" << endl;
    return 0;
}