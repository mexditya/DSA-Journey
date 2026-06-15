//Find the third smallest element in an array of unique elements size n. Where n>3.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    //Taking Array elements as input from the user. 
    cout << "Enter " << n << " Elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Assuming smallest, second smallest and third smallest values.

    int smallest, second_smallest, third_smallest;

    if(arr[0] < arr[1] && arr[0] < arr[2]) {
        smallest = arr[0];
        
        if(arr[1] < arr[2]){
            second_smallest = arr[1];
            third_smallest = arr[2];
        }
        else{
            second_smallest = arr[2];
            third_smallest = arr[1];
        }
    }

    else if(arr[1] < arr[0] && arr[1] < arr[2]){
        smallest = arr[1];

        if(arr[0] < arr[2]){
            second_smallest = arr[0];
            third_smallest = arr[2];
        }
        else {
            second_smallest = arr[2];
            third_smallest = arr[0];
        }
    }

    else if(arr[2] < arr[0] && arr[2] < arr[1]){
        smallest = arr[2];

        if(arr[0] < arr[1]){
            second_smallest = arr[0];
            third_smallest = arr[1];
        }
        else {
            second_smallest = arr[1];
            third_smallest = arr[0];
        }
    }
    

    //Comparing with other values and updating
    for(int i = 3; i < n; i++) {
        if(arr[i] < smallest) {
            third_smallest = second_smallest;
            second_smallest = smallest;
            smallest = arr[i];
        }

        else if(arr[i] < second_smallest) {
             third_smallest = second_smallest;
            second_smallest = arr[i];
        }

        else if(arr[i] < third_smallest) {
            third_smallest = arr[i];
        }
    }

    cout << "Smallest: " << smallest << "\nSecond Smallest: " << second_smallest << "\nThird Smallest: " << third_smallest << endl;
    return 0;

}