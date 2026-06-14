//WAP to check if a number is a armstrong number

#include <bits/stdc++.h> //On including this, you do not need to include any other header file.
using namespace std;

int count (int num) {
    int count = 0;

    if(num == 0) {
        count = 1;
        return count;
    }

    while(num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

bool armstrong(int num, int digits){
   int original = num, sum = 0, rem;

    if(num == 0) 
        return 1; //EDGE CASE --> 0 is also an armstrong number. 

   while(original != 0) {
    rem = original % 10;
    original /= 10;

    sum += pow(rem, digits);        // pow(base, times)
   }

   if(sum == num)
    return 1;
   else
    return 0;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(armstrong(num, count(num)) == 1)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not an Armstrong Number" << endl;

    return 0;
}