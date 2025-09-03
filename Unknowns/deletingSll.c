#include <stdio.h>
#include <stdlib.h>

// Definition of the Node structure for Singly Linked List
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at the end of the singly linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Traverse to the last node and insert the new node at the end
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to delete a node with a specific value
void deleteNode(struct Node** head, int data) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;

    // If the node to be deleted is the head node
    if (temp != NULL && temp->data == data) {
        *head = temp->next;  // Change head to the next node
        free(temp);  // Free memory of the old head
        return;
    }

    // Search for the node to be deleted
    struct Node* prev = NULL;
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    // If the node is not found
    if (temp == NULL) {
        printf("Node with value %d not found.\n", data);
        return;
    }

    // Unlink the node from the list
    prev->next = temp->next;

    // Free memory of the node
    free(temp);
}

// Function to print the singly linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to test the singly linked list operations
int main() {
    struct Node* head = NULL;  // Initializing the head as NULL

    // Inserting nodes at the end
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    // Printing the list before deletion
    printf("Original List: ");
    printList(head);

    // Deleting a node with value 30
    deleteNode(&head, 30);
    printf("List after deleting 30: ");
    printList(head);

    // Deleting the head node (node with value 10)
    deleteNode(&head, 10);
    printf("List after deleting 10: ");
    printList(head);

    // Trying to delete a node that does not exist (node with value 100)
    deleteNode(&head, 100);
    printf("List after trying to delete 100: ");
    printList(head);

    // Deleting the last node (node with value 50)
    deleteNode(&head, 50);
    printf("List after deleting 50: ");
    printList(head);

    return 0;
}
