//Bubble Sort Algorithm to sort the array of char in ascending order.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    char arr[n];

    cout << "Enter " << n << " Characters: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    for(int i = 0; i < n-1; i++) {
        bool swapped = false;

        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }

        if(swapped == false)
            break;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}