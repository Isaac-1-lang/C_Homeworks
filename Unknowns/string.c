#include <stdio.h>

int main() {
    char message[11] = "Hello"; // '\0' is added automatically by the compiler
    printf("%s\n", message);   // Prints the string correctly

    char response[] = {'H', 'E', 'L', 'L', 'O', '\0'}; // Ensure proper null termination
    printf("%c\n", response[4]); // Prints the 5th character ('O')

    char name[50]; // Allocate a size for the name array
    printf("Please enter your username on github:\n");
    fgets(name, sizeof(name), stdin); // Read input from the user
    printf("Your name is: %s", name); // Print the user's name
    if(strlen(name) >= 30) {
    	printf("The name is long it cannot be stored into our database.");
	} else {
		printf("You have registered successfully!!");
	}

    return 0;
}
