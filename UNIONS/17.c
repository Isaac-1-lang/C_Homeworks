#include <stdio.h>

// Define a union
union course {
    int topicNum;
    int studyNum;
    int trNum;
    float price;
};

// Function to manipulate the union
void manipulateUnion(union course *courses) {
    courses->topicNum = 14;   // Only one value is stored at a time in a union
    courses->price = 1000000.3232; // Overwrites previous value
    courses->trNum = 32;  // Overwrites again
}

int main() {
    union course courses;  // Declare union variable
    
    manipulateUnion(&courses);  // Pass the address to modify values

    printf("Topic Number: %d\n", courses.topicNum); // This may show garbage due to overwriting
    printf("Price: %.2f\n", courses.price); // Most recent value stored in the union
    printf("Training Number: %d\n", courses.trNum); // Last assigned value
     printf("Topic Number: %d\n", courses.topicNum); // This may show garbage due to overwriting

    return 0;
}
