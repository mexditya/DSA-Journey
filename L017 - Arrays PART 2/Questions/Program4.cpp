/*
You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). 
This array represents a permutation of the integers from 1 to n with one element missing. 
Your task is to identify and return the missing element
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n-1];                        //Size of Array is n-1

    cout << "Enter elements: ";
    for(int i = 0; i < n-1; i++) {      //Size of Array is n-1, so we take n-1 inputs
        cin >> arr[i];
    }

    int sum = 0;                        //Finding Sum from 1 to n
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    for(int i = 0; i < n-1; i++) {      //Subtracting Array Elements from sum
        sum -= arr[i];
    }


    cout << "Missing Element: " << sum << endl;
    return 0;
}

/*CONCEPT:-
Since the array is of n-1 size and there are distinct elements in the range 1 to n
and 1 element is missing, since only n-1 elements can be filled in the array.

if we find the sum from 1 to n,
then subtract all the existing elements of the array from the sum, then we will get the missing element.

*/