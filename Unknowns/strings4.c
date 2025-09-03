#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char *firstName;
    char *lastName;

    // Read the input from the user
    printf("Enter your full name: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if present
    input[strcspn(input, "\n")] = 0;

    // Split the input string
    firstName = strtok(input, " ");
    lastName = strtok(NULL, " ");

    // Print the desired output
    if (lastName != NULL) {
        printf("I am %s\n .", lastName);
    } else {
        printf("Last name not found.\n");
    }

    return 0;
}
