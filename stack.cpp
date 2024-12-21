#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int maxSize;
    int* stackArray;

public:
    Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;
    }

    ~Stack() {
        delete[] stackArray;
    }

    void push(int value) {
        if (top >= maxSize - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        stackArray[++top] = value;
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return stackArray[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return stackArray[top];
    }

    bool isEmpty() {
        return top < 0;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    cout << "Top element is: " << stack.peek() << endl;
    stack.pop();
    stack.display();
    return 0;
}
