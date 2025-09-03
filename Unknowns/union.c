#include <stdio.h>

union Data {
    int i;
    float f;
    char str;
};

int main() {
    union Data data;
    data.str = 'A';
     printf("data.string = %c\n", data.str);
    // Storing an integer
    data.i = 10;
    printf("data.i = %d\n", data.i);

    //Storing a float (overwrites the previous value of data.i)
    data.f = 220.5;
    printf("data.f = %.2f\n", data.f);
    printf("Newly created data.i = %d\n", data.i);

    // Storing a string (overwrites the previous value of data.f)
    //strcpy(data.str, "Hello, Union!");
    printf("data.str = %s\n", data.str);
    printf("Newly created data.i = %d\n", data.i);
    // Printing the size of the a union
    printf("The size is %zu bytes",sizeof(union Data));

    return 0;
}
