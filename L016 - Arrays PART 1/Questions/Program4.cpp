//WAP to input size of an integer array and input its elements and calculate the average

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    int arr[n], sum = 0;
    double avg;

    cout << "Enter " << n << " Elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    avg = (double)sum / n;

    cout << "Average Value: " << avg << endl;
    return 0;
}
