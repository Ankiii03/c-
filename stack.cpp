#include <iostream>

#define MAX_SIZE 100 // Maximum size of the stack

class Stack {
private:
    int top;        // Index of the top element in the stack
    int arr[MAX_SIZE]; // Array to store stack elements

public:
    Stack() {
        top = -1;   // Initialize top to -1 indicating an empty stack
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            std::cout << "Stack Overflow! Cannot push more elements." << std::endl;
            return;
        }
        arr[++top] = value; // Increment top and then add the value to the top of the stack
    }

    // Function to pop an element from the stack
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow! Cannot pop from an empty stack." << std::endl;
            return -1;  // Return -1 to indicate failure
        }
        return arr[top--]; // Return the top element and then decrement top
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to return the top element without removing it
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty!" << std::endl;
            return -1;  // Return -1 to indicate failure
        }
        return arr[top];
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element of the stack: " << myStack.peek() << std::endl;

    std::cout << "Popping elements from the stack: ";
    while (!myStack.isEmpty()) {
        std::cout << myStack.pop() << " ";
    }
    std::cout << std::endl;

    return 0;
}
