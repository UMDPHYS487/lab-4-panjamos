// add your code here
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Please enter a number: \n";
    cin >> n;

    if (cin.fail()) {
        n = 100;
    }

    switch(n%2){
        case 1:
        case -1:
            cout << float(n)/2 << "\n";
            break;
        case 0:
            if (n<10)
            {
                cout << n*n << "\n";
                break;
            }
        default:
            cout << "hahaha" << "\n";
    }

}