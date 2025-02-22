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
    int n;
    std::cout << "Please enter an integer value: \n";
    std::cin >> n;
    std::cout << "The value you entered is " << n << " and it's factorial is " << factorial(n) << "\n";
}