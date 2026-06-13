/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
*/

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;

    if(x == 0) {
        cout << 0;
        return 0;
    }

    int pre_num = 1;
    int nxt_num = 2;

    while(true) {
        int pre_sq = pre_num * pre_num;
        int nxt_sq = nxt_num * nxt_num;

        if(x >= pre_sq && x < nxt_sq) {
            cout << pre_num;
            return 0;
        }

        if(x == nxt_sq) {
            cout << nxt_num;
            return 0;
        }

        pre_num++;
        nxt_num++;
    }
}