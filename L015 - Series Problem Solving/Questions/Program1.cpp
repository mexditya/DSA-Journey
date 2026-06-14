// WAP to convert a complete sentence into lowercase letters.

#include <iostream>
#include <string>      // Required for string data type
#include <cctype>      // Required for tolower()
using namespace std;

void lower(string &s) {

    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
        // tolower() converts an uppercase character to lowercase.
        // It processes one character at a time.
    }
}

int main() {
    string s;

    cout << "Enter the sentence: ";

    getline(cin, s);
    // getline() reads the entire line including spaces.
    // cin >> s stops reading when it encounters a space.

    lower(s);

    cout << "Lower Case: " << s << endl;

    return 0;
}