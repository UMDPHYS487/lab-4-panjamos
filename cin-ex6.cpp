// your code here
#include <iostream>
using namespace std;

int y;
int *x;

int main() {
    x = &y;
    cout << *x << "\n";
    y = 10;
    cout << *x << "\n";
    y = 20;
    cout << *x << "\n";
}