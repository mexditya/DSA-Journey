//WAP to sort an array using bubble sort

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " Elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++) {
        bool swapped = false; // No swap in this pass yet

        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j], arr[j+1]); 
            }   
        }

        if(swapped == false) { //If no swap made in first round. it means it is already sorted and we don't need to run the loop again.
            break;
        }
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}