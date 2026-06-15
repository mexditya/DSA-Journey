//Find the second largest element in an array of unique elements of size n. Where n>3.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    //Taking Input in the array
    cout << "Enter " << n << " Elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Assuming Largest and Second Largest values
    int largest, second_largest;
    
    if(arr[0] > arr[1]){
        largest = arr[0];
        second_largest = arr[1];
    }
    
    else {
        largest = arr[1];
        second_largest = arr[0];
    }


    //Comparing largest and second largest with all remaining elements and updating
    for(int i = 2; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    cout << "Largest: " << largest << "\nSecond Largest: " << second_largest << endl;
    return 0;
}