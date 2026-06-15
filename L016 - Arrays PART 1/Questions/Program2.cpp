//WAP to input the length of an integer array and then the elements and find the maximum element.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " Element:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int MAX = arr[0], index = 0, pos = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > MAX){
            MAX = arr[i];
            index = i;
            pos = i + 1;
        }
    }

    cout << "Largest Element: " << MAX << "\nIndex: " << index << "\nPosition: " << pos << endl;
    return 0;
}