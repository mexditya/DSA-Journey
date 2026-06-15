//WAP to input elements in an integer array of length n, and search whether a specific element in present in the array or not. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " Elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[n];
    }

    int num;
    cout << "Ente the element to search: ";
    cin >> num;

    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            cout << "Element found at " << i << " index and " << i + 1 << " position." << endl;
            return 0;
        }
    }

    cout << "Element not found!" << endl;
    return 0;
}