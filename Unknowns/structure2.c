#include <stdio.h>
#include <string.h>

struct Person {
    char Name;
    int Age;
    char job[20];
    char company[20];
};

struct Student {
    char Full_Name[20];
    int age;
    int totalMarks; // Corrected the variable name
};

int main() {
    struct Person person;
    struct Person *ptr = &person;

    // First person's characteristics
    ptr->Age = 13;
    snprintf(ptr->Name, sizeof(ptr->Name), "NIYOBYOSE Isaac Precieux");
    snprintf(ptr->job, sizeof(ptr->job), "Software Engineer");

    printf("The first Name is: %s\n", ptr->Name);
    printf("The Job title is: %s\n", ptr->job);
    printf("The Age is: %d\n", ptr->Age);

    // Student structure
    printf("Enter the name of the 1st Student:\n");
    struct Student Student1;
    struct Student Student2;
    struct Student *ptr1 = &Student1; 
	struct Student *ptr2 = &Student2;// Correctly assign pointer to the struct variable

    fgets(ptr1->Full_Name,sizeof(ptr1->Full_Name),stdin); // Correctly read input into the Full_Name array

    printf("The name of the 1nd Student is: %s\n", ptr1->Full_Name);
    printf("Enter the name of 2nd Student is: %s\n");
    //struct Student *ptr6 = &Student2; // Correctly assign pointer to the struct variable

    fgets(ptr2->Full_Name,sizeof(ptr2->Full_Name),stdin); // Correctly read input into the Full_Name array

    printf("The name of the 2nd Student is: %s\n", ptr2->Full_Name);

    return 0;
    #include <stdio.h>

#define MAX_NODES 10

struct Node {
    int data;
    int next;
};

void initNode(struct Node* node, int value) {
    node->data = value;
    node->next = -1; // Indicates the end of the list
}

void displayList(struct Node nodes[], int count) {
    int index = 0;
    printf("Linked List: ");
    while (index != -1) {
        printf("%d -> ", nodes[index].data);
        printf("Next Value: [%d] -> ", nodes[index].next);
        
        index = nodes[index].next;
    }
    printf("NULL\n"); // Indicate the end of the list
}

// void displayAddresses(struct Node nodes[], int count) {
//     printf("Addresses of nodes\n");
//     for (int i = 0; i < count; i++) {
//         printf("Address of node %d: %p\n", i, (void*)&nodes[i]);
//     }
// }

// void validateLinkedList(struct Node nodes[], int count) {
//     printf("Validating linked list...\n");
//     for (int i = 0; i < count; i++) {
//         printf("Node %d: Data = %d, Next = %d\n", i, nodes[i].data, nodes[i].next);
//         if (nodes[i].next != -1) {
//             printf("Next node address: %p\n", (void*)&nodes[nodes[i].next]);
//         } else {
//             printf("This is the last node.\n");
//         }
//     }
// }

int main() {
    struct Node nodes[MAX_NODES];

    // Initialize nodes
    for (int i = 0; i < MAX_NODES; i++) {
        initNode(&nodes[i], i + 21 * 21+1000/500); // Initialize with values 1 to 5
    }

    // Manually link the nodes
    nodes[0].next = 1; // Node 0 points to Node 1
    nodes[1].next = 2; // Node 1 points to Node 2
    nodes[2].next = 3; // Node 2 points to Node 3
    nodes[3].next = 4; // Node 3 points to Node 4
    nodes[4].next = 5; // Node 4 points to NOde 5
    nodes[5].next = 6; // Node 5 points to Node 6
    nodes[6].next = 7; // 
    nodes[7].next = 8;
    nodes[8].next = -1; // Last node points to -1

    // Display the list
    displayList(nodes, MAX_NODES);

    // Display addresses of the nodes
    //displayAddresses(nodes, MAX_NODES);

    // Validate linked list structure
    // validateLinkedList(nodes, MAX_NODES);

    return 0;
}

}
