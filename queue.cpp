#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    unsigned capacity;
    int* array;

public:
    Queue(unsigned capacity) {
        this->capacity = capacity;
        front = this->size = 0;
        rear = capacity - 1;
        array = new int[this->capacity];
    }

    ~Queue() {
        delete[] array;
    }

    bool isFull() {
        return (this->size == this->capacity);
    }

    bool isEmpty() {
        return (this->size == 0);
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << item << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        array[rear] = item;
        size = size + 1;
        cout << item << " enqueued to queue" << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue" << endl;
            return -1;
        }
        int item = array[front];
        front = (front + 1) % capacity;
        size = size - 1;
        return item;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot peek" << endl;
            return -1;
        }
        return array[front];
    }

    int getSize() {
        return size;
    }
};

int main() {
    Queue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.enqueue(60); // This will show that the queue is full

    cout << queue.dequeue() << " dequeued from queue" << endl;
    cout << "Front item is: " << queue.peek() << endl;
    cout << "Queue size is: " << queue.getSize() << endl;

    return 0;
}