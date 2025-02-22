// Add your code here
#include <iostream>
int factorial(int i){
    int m = 1;
    for (int n=i; n>0; n--){
        m = n*m;
    }
    return m;
}

int main() {
    for(int i=1; i<=10 ;i++){        
        std::cout << "factorial of " << i << " is " << factorial(i) << "\n";
    }
}