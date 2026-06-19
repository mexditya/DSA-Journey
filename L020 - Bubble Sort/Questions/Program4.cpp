/*Bubble Sort Algorithm to sort the array of integers in increasing order 
by taking the smallest number to first place by starting from the last.*/

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

    for(int i = 0; i < n-1; i++) {
        bool swapped = false;
        for(int j = n-1; j > i; j++) {
            if(arr[j] < arr[j-1]){
                swapped = true;
                swap(arr[j], arr[j-1]);
            }
        }

        if(swapped = false){
            break;
        }
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}