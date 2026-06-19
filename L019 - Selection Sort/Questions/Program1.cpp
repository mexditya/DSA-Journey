//WAP to sort an array using selection sort

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; 
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter" << n << " Elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++){               //For an array of n elements, it takes n-1 rounds to sort it
        int smallest = i;

        for(int j = i+1; j < n; j++) {          //Checks for smallest from the next place (after i) onwards
            if(arr[j] < arr[smallest])
                smallest = j;
        }

        swap(arr[smallest], arr[i]);
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;   

}

//Selection Sort is not the most optimised algorithm for sorting.