//WAP to find the trailing zero in an integer

#include <bits/stdc++.h>
using namespace std;

int trailing(int num) {
    int ld, count = 0;

    if(num == 0)    //Edge case, must be handled separately because if num is 0, dividing by 10 keeps it 0 forever, causing an infinite loop.
        return 1;

    while(true){
        ld = num % 10;

        if(ld != 0) 
            return count;
        count++;
        num /= 10;
    }

    return count;
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Trailing Zeroes: " << trailing(num) << endl;
    
    return 0;

}