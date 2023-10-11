#include <iostream>

// Define the structure for a singly linked list node.
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

// Function to print a linked list.
void printLinkedList(Node* head) {
    while (head) {
        std::cout << head->data << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Function to reverse a singly linked list.
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Store the next node.
        current->next = prev; // Reverse the link.

        // Move the pointers one step ahead.
        prev = current;
        current = next;
    }

    // Update the new head of the reversed list.
    head = prev;
    return head;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    head = reverseLinkedList(head);

    std::cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}
