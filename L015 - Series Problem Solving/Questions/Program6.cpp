/*
WAP to input the position(row, col) of a bishop on a chess board and 
count the total moves it can make in all the directions
*/
#include <bits/stdc++.h>
using namespace std;

int top_left(int r, int c) {
    int r_step, c_step;

    r_step = r - 1;
    c_step = c - 1;

    if(r_step < 0)
        r_step = r_step * (-1);
    if(c_step < 0)
        c_step = c_step * (-1);

    if(r_step <= c_step)
        return r_step;
    else
        return c_step;
}

int top_right(int r, int c) {
    int r_step, c_step;

    r_step = r - 1;
    c_step = c - 8;

    if(r_step < 0)
        r_step = r_step * (-1);
    if(c_step < 0)
        c_step = c_step * (-1);

    if(r_step <= c_step)
        return r_step;
    else
        return c_step;
}

int bottom_left(int r, int c) {
    int r_step, c_step;

    r_step = r - 8;
    c_step = c - 1;

    if(r_step < 0)
        r_step = r_step * (-1);
    if(c_step < 0)
        c_step = c_step * (-1);

    if(r_step <= c_step)
        return r_step;
    else
        return c_step;
}

int bottom_right(int r, int c) {
    int r_step, c_step;

    r_step = r - 8;
    c_step = c - 8;

    if(r_step < 0)
        r_step = r_step * (-1);
    if(c_step < 0)
        c_step = c_step * (-1);

    if(r_step <= c_step)
        return r_step;
    else
        return c_step;
}

int main() {
    int r, c, moves = 0;
    cout << "Enter the current position of bishop (row, column): ";
    cin >> r >> c;

    if(r > 8 || c > 8) {
        cout << "Invalid Input" << endl;
        return 0;
    }


    moves = top_left(r, c) + top_right(r, c) + bottom_left(r, c) + bottom_right(r, c);

    cout << "Total Moves Available: " << moves << endl;

    return 0;

}