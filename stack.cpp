#include <iostream>
using namespace std;

// #define MAX_SIZE 100  // You can change the size as needed
const int MAX_SIZE = 100; // Define the maximum size of the stack


class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow\n";
        } else {
            top++;
            arr[top] = value;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
        } else {
            cout << "Popped: " << arr[top] << endl;
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.peek();
    s.pop();
    s.display();

    return 0;
}
