#include <stdio.h>
#include <string.h>  // Needed for strcpy()

// Define a union (Using char array for Fname)
union person {
    char Fname[20];  // Correct type for storing names
    int age;
    char grade;
    char gender;
    int IQ;
};

// Function to modify union values
void manipulateUnion(union person *person1) {
    person1->age = 12;
    printf("Age: %d\n", person1->age);
}

// This function will overwrite the previous value
void manipulateUnion1(union person *person2) {
    person2->gender = 'F';
    printf("Gender: %c\n", person2->gender);
}

// Another function that overwrites again
void manipulateUnion2(union person *person3) {
    person3->IQ = 133;
    printf("IQ: %d\n", person3->IQ);
}

int main() {
    union person PERSON1;

    manipulateUnion(&PERSON1);
    manipulateUnion1(&PERSON1);
    manipulateUnion2(&PERSON1);

    // Final value stored will be from manipulateUnion2()
    printf("Final stored value (IQ): %d\n", PERSON1.IQ);

    return 0;
}
