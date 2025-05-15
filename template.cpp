#include <iostream>
template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(const T& value) : data(value), next(nullptr) {}
};
template <typename T>
class LinkedList {
private:
    Node<T>* head;
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        // Destructor to delete all nodes when the linked list is destroyed
        clear();
    }
void append(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = newNode;
        } else {
            Node<T>* current = head;
while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void prepend(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
    }
    void remove(const T& value) {
        if (!head) {
            return; // Empty list, nothing to remove
        }

        if (head->data == value) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node<T>* current = head;
        while (current->next && current->next->data != value) {
            current = current->next;
        }
        if (current->next) {
Node<T>* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }
    void display() const {
        Node<T>* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    void clear() {
        while (head) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    // Linked List example
    LinkedList<int> myList;
    myList.append(10);
    myList.append(20);
    myList.prepend(5);
    myList.append(30);

    std::cout << "Linked List: ";
    myList.display();
myList.remove(20);

    std::cout << "Linked List after removing 20: ";
    myList.display();
myList.clear(); // Destructor is called implicitly when myList goes out of scope

    return 0;
}
