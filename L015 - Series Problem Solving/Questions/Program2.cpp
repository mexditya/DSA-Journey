//WAP to convert a character into to upper case without usig inbuilt function .tolower()

#include <iostream>
using namespace std;

void upper(char &c) {
    c = c - 'a' + 'A';
}

int main() {
    char c;
    cout << "Enter the character: ";
    cin >> c;

    if(c >= 65 && c <= 90){// Checks if the character is already upper case
        cout << "Already Upper case: " << c << endl;
        return 0;
    }      
    
    upper(c);
    cout << "Upper case: " << c << endl;
    return 0;
}