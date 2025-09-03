#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_PROFILES 10

// User profile structure
typedef struct {
    char username[MAX_NAME_LENGTH];
    int id;
} UserProfile;

void createUserProfile(UserProfile *profileDB, int id, const char *username) {
    // Using strcpy to copy username into the user profile
    strcpy(profileDB[id].username, username);
    profileDB[id].id = id;
}

void printUserProfiles(UserProfile *profileDB, int size) {
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Username: %s\n", profileDB[i].id, profileDB[i].username);
    }
}

int main() {
    UserProfile profileDB[MAX_PROFILES];

    // Simulating registration of users
    createUserProfile(profileDB, 0, "john_doe");
    createUserProfile(profileDB, 1, "jane_smith");
    createUserProfile(profileDB, 2, "emma_jones");

    printf("User Profiles:\n");
    printUserProfiles(profileDB, 3);

    return 0;
}
