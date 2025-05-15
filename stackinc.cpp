#include <iostream>
#include <stdexcept>

// Stack class
template <typename T>
class Stack {
private:
    static const int MAX_SIZE = 100;
    T data[MAX_SIZE];
    int top;
public:
    Stack() : top(-1) {}

    void push(const T& value) {
        if (top == MAX_SIZE - 1) {
            throw std::overflow_error("Stack overflow");
        }
        data[++top] = value;
    }

    T pop() {
        if (isEmpty()) {
            throw std::underflow_error("Stack underflow");
        }
        return data[top--];
    }
    bool isEmpty() const {
        return top == -1;
    }
};

// Queue class
template <typename T>
class Queue {
private:
    static const int MAX_SIZE = 100;
    T data[MAX_SIZE];
    int front, rear;
public:
    Queue() : front(-1), rear(-1) {}

    void enqueue(const T& value) {
        if (isFull()) {

   throw std::overflow_error("Queue overflow");
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }

        data[rear] = value;
    }

    T dequeue() {
        if (isEmpty()) {
            throw std::underflow_error("Queue underflow");
        }

        T value = data[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        return value;
    }

    bool isEmpty() const {
        return front == -1 && rear == -1;
    }

    bool isFull() const {
        return (rear + 1) % MAX_SIZE == front;
    }
};
int main() {
    try {
        // Stack example
        Stack<int> myStack;
        myStack.push(10);
        myStack.push(20);
        myStack.push(30);

        while (!myStack.isEmpty()) {
            std::cout << "Stack popped: " << myStack.pop() << std::endl;
        }

        // Queue example

	


   
        Queue<std::string> myQueue;
        myQueue.enqueue("First");
        myQueue.enqueue("Second");
        myQueue.enqueue("Third");
        while (!myQueue.isEmpty()) {
            std::cout << "Queue dequeued: " << myQueue.dequeue() << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
