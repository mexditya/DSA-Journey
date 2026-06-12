//WAP to input package and accept only if greater than or equal to 12 LPA.

  #include <iostream>
  using namespace std;

  int main() {

    int PKG;

    cout << "Enter the CTC(in LPA): ";
    cin >> PKG;

    if(PKG >= 12)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
  }