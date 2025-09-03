#include <stdio.h>

#define MAX_NODES 5

struct Node {
    int data;
    int next;
};

void initNode(struct Node* node, int value) {
    node->data = value;
    node->next = -1; // Indicates the end of the list
}

int displayList(struct Node nodes[], int count) {
    int index = 0;
    while (index != -1) {
        printf("%d -> ", nodes[index].data);
        index = nodes[index].next;
    }
    printf("NULL\n"); // Indicate the end of the list
}

int main() {
    struct Node nodes[MAX_NODES];

    // Initialize nodes
    for (int i = 0; i < MAX_NODES; i++) {
        initNode(&nodes[i], i + 1836); // Initialize with values 1 to 5
    }

    // Manually link the nodes
    nodes[0].next = 1; // Node 0 points to Node 1
    nodes[1].next = 2; // Node 1 points to Node 2
    nodes[2].next = 3; // Node 2 points to Node 3
    nodes[3].next = 4; // Node 3 points to Node 4
    nodes[4].next = -1; // Last node points to -1

    // Display the list
    int result = displayList(nodes, MAX_NODES);
    int *ptr= &result;
    for(int i=0;i<5;i++) {
    	printf("%p\n",ptr+i);
	}

    return 0;
}
