//WAP to check whether prime or not 
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter the number: ";
    cin >> num;

    if(num < 2){
        cout << "Not Prime" << endl;
        return 0;
    }
    else{
        for(int i = 2; i < num; i++){
            if(num % i == 0) {
                count++;
                break;
            }
        }
        if(count != 0)
            cout << "Not Prime" << endl;
        else 
            cout << "Prime" << endl;
    }
}