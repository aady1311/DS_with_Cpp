#include <iostream>
using namespace std;

int main() {
    int num = 10;

    int* ptr = &num;  // Pointer stores address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr stores: " << ptr << endl;
    cout << "Value at ptr (dereferencing): " << *ptr << endl;

    return 0;
}

