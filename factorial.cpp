#include <iostream>
using namespace std;

int factorial(int a) {
    if (a == 0 || a == 1)
        return 1;
    else
        return a * factorial(a - 1);
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
// This program calculates the factorial of a number using recursion. which calls itself with a decremented value until it reaches the base case of 0 or 1.