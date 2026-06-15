//WAP to input the length of an integer array and then elements from the user and find the minimum element.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    //Input elements in array
    cout << "Enter " << n << " Elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0], index = 0, pos = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            index = i;
            pos = i + 1;
        }
            
    }

    cout << "Smallest element: " << min << "\nIndex: " << index << "\nPosition: " << pos << endl;
    return 0;
}