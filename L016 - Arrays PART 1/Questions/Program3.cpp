//WAP to input n elements from the user and find the sum of all elements

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n], sum = 0;

    cout << "Enter " << n << " Elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;
    return 0;

}