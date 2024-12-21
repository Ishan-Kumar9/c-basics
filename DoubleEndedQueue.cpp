#include <iostream>
using namespace std;

class Deque {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    Deque(int size) {
        arr = new int[size];
        capacity = size;
        front = -1;
        rear = 0;
    }

    ~Deque() {
        delete[] arr;
    }

    bool isFull() {
        return (front == 0 && rear == capacity - 1) || (front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void insertFront(int key) {
        if (isFull()) {
            cout << "Overflow\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (front == 0) {
            front = capacity - 1;
        } else {
            front--;
        }
        arr[front] = key;
    }

    void insertRear(int key) {
        if (isFull()) {
            cout << "Overflow\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (rear == capacity - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = key;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Underflow\n";
            return;
        }
        if (front == rear) {
            front = -1;
            rear = 0;
        } else if (front == capacity - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Underflow\n";
            return;
        }
        if (front == rear) {
            front = -1;
            rear = 0;
        } else if (rear == 0) {
            rear = capacity - 1;
        } else {
            rear--;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty() || rear < 0) {
            cout << "Deque is empty\n";
            return -1;
        }
        return arr[rear];
    }
};

int main() {
    Deque dq(5);
    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    cout << "Front element: " << dq.getFront() << endl;
    cout << "Rear element: " << dq.getRear() << endl;
    dq.deleteRear();
    cout << "Rear element after deletion: " << dq.getRear() << endl;
    return 0;
}