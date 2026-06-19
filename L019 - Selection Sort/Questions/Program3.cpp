/*
Write a C++ program to implement the Selection Sort algorithm to sort an array of integers
in increasing (ascending) order by selecting the largest element in each pass. 
Take the array elements as input from the user and display the sorted array after applying Selection Sort.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " Elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++) {
        int maximum = 0;

        for(int j = 1; j < n-i; j++) {
            if(arr[j] > arr[maximum]){
                maximum = j;
            }
        }

        swap(arr[maximum], arr[n-i-1]);
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}

/*
SELECTION SORT (ASCENDING ORDER BY SELECTING THE LARGEST ELEMENT)

1. Goal:
   - Sort the array in ascending order.

2. Approach:
   - Instead of finding the smallest element and placing it at the beginning,
     find the largest element and place it at the end.

3. Observation:
   - After every pass, the rightmost part of the array becomes sorted.

4. Example:

   Initial Array:
   [12 4 9 20 7]

   Pass 1:
   Find largest element (20) and place it at the last position.
   [12 4 9 7 | 20]

   Pass 2:
   Find largest element (12) in the unsorted portion.
   [7 4 9 | 12 20]

   Pass 3:
   Find largest element (9) in the unsorted portion.
   [7 4 | 9 12 20]

   Pass 4:
   Find largest element (7) in the unsorted portion.
   [4 | 7 9 12 20]

   Sorted Array:
   [4 7 9 12 20]

5. Unsorted and Sorted Portions:

   For pass i:

   Unsorted Portion = 0 to (n - i - 1)
   Sorted Portion   = (n - i) to (n - 1)

6. Why maximum = 0?

   - The unsorted portion always starts from index 0.
   - We need a candidate index for the largest element.
   - Since index 0 belongs to the unsorted portion,
     we initialize:

     int maximum = 0;

   - Then we compare all other elements in the unsorted portion
     with arr[maximum] and update maximum whenever a larger
     element is found.

*/