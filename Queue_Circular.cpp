#include <iostream>
using namespace std;

#define SIZE 5  // Size of the circular queue

class CircularQueue {
private:
    int queue[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int value) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue is Full\n";
        } else if (front == -1) { // First element
            front = rear = 0;
            queue[rear] = value;
        } else {
            rear = (rear + 1) % SIZE;
            queue[rear] = value;
        }
    }

    // Dequeue operation
    void dequeue() {
        if (front == -1) {
            cout << "Queue is Empty\n";
        } else if (front == rear) { // Only one element
            cout << "Deleted: " << queue[front] << endl;
            front = rear = -1;
        } else {
            cout << "Deleted: " << queue[front] << endl;
            front = (front + 1) % SIZE;
        }
    }

    // Peek operation
    void peek() {
        if (front == -1) {
            cout << "Queue is Empty\n";
        } else {
            cout << "Front Element: " << queue[front] << endl;
        }
    }

    // isEmpty operation
    bool isEmpty() {
        return front == -1;
    }

    // Display operation
    void display() {
        if (front == -1) {
            cout << "Queue is Empty\n";
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (true) {
                cout << queue[i] << " ";
                if (i == rear)
                    break;
                i = (i + 1) % SIZE;
            }
            cout << endl;
        }
    }
};

// Driver code
int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(50);
    q.enqueue(60);  // This should show "Queue is Full"
    q.display();

    q.peek();

    return 0;
}
