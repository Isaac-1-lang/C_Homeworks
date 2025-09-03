#include <stdio.h>
#include <stdlib.h>

// Definition of the Node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to insert at the beginning
void insertAtTheBeginning(struct Node **head, int data) {
    struct Node *newNode = createNode(data);
    // Make the new node's next pointer point to the current head
    newNode->next = *head;
    
    // Update the head to the new node
    *head = newNode;
}

// Function to print the linked list nodes
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize the head of the list
    struct Node *head = NULL;

    // Insert elements at the beginning
    insertAtTheBeginning(&head, 10);
    insertAtTheBeginning(&head, 304);
    insertAtTheBeginning(&head, 105);
    insertAtTheBeginning(&head, 109);
    insertAtTheBeginning(&head, 106);
    insertAtTheBeginning(&head, 150);
    insertAtTheBeginning(&head, 107);
    insertAtTheBeginning(&head, 180);
    insertAtTheBeginning(&head, 90);
    insertAtTheBeginning(&head, 100);

    // Print the linked list
    printList(head);

    return 0;
}
