/*
NIM GAME

You are playing the following Nim Game with your friend:

Initially, there is a heap of stones on the table.
You and your friend will alternate taking turns, and you go first.
On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.
The one who removes the last stone is the winner.
Given n, the number of stones in the heap, return true if you can win the game assuming both you and your friend play optimally, otherwise return false.

*/

#include <bits/stdc++.h>
using namespace std;


bool result(int n){
    if(n % 4 == 0) 
        return 0;
    else
        return 1;
}

int main() {
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid Input!" << endl;
        return 0;
    }
    
    if(result(n) == 0) 
        cout << "LOOSE" << endl;
    else
        cout << "WIN" << endl;

    return 0;
}