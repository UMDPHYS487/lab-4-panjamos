// Add your code here
#include <iostream>
int main() {
    int m = 1;
    for(int i=1; i<=10 ;i++){
        m = m*i;
        std::cout << "factorial of " << i << " is " << m << "\n";
    }
}