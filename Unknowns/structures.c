#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Animal structure with a pointer to the next Animal
struct Animal {
    char Name[10];
    int Age;
    char job[10];
    char color[10];
    struct Animal *next; // Pointer to the next Animal
};

// Function to create a new Animal node
struct Animal* createAnimal(const char* name, int age, const char* job, const char* color) {
    struct Animal* newAnimal = (struct Animal*)malloc(sizeof(struct Animal));
    strncpy(newAnimal->Name, name, sizeof(newAnimal->Name) - 1);
    newAnimal->Name[sizeof(newAnimal->Name) - 1] = '\0'; // Ensure null-termination
    newAnimal->Age = age;
    strncpy(newAnimal->job, job, sizeof(newAnimal->job) - 1);
    newAnimal->job[sizeof(newAnimal->job) - 1] = '\0'; // Ensure null-termination
    strncpy(newAnimal->color, color, sizeof(newAnimal->color) - 1);
    newAnimal->color[sizeof(newAnimal->color) - 1] = '\0'; // Ensure null-termination
    newAnimal->next = NULL; // Initialize the next pointer to NULL
    return newAnimal;
}

// Function to add an Animal to the linked list
void addAnimal(struct Animal** head, struct Animal* newAnimal) {
    if (*head == NULL) {
        *head = newAnimal; // If the list is empty, make the new animal the head
    } else {
        struct Animal* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next; // Traverse to the end of the list
        }
        temp->next = newAnimal; // Link the new animal at the end
    }
}

// Function to display the linked list of Animals
void displayAnimals(struct Animal* head) {
    struct Animal* temp = head;
    while (temp != NULL) {
        printf("Name: %s, Age: %d, Job: %s, Color: %s\n", 
               temp->Name, temp->Age, temp->job, temp->color);
        temp = temp->next; // Move to the next animal
    }
}

// Free the linked list
void freeAnimals(struct Animal* head) {
    struct Animal* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp); // Free the memory allocated for the animal
    }
}

int main() {
    struct Animal* animalList = NULL; // Head of the linked list

    // Create animals and add them to the linked list
    addAnimal(&animalList, createAnimal("Cow", 5, "Milk", "Brown"));
    addAnimal(&animalList, createAnimal("Lion", 8, "King", "Yellow"));
    addAnimal(&animalList, createAnimal("Monkey", 3, "Play", "Gray"));

    // Display all animals in the linked list
    displayAnimals(animalList);

    // Free the linked list
    freeAnimals(animalList);

    return 0;
}
