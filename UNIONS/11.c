#include <stdio.h>
struct dataTypes {
    int n;
    int f;
    int d;
    int c;
    int lc; 
}
union ascii {
    int intValue;// Integer values holder
    float floatValue;// float point numbers holder
    char charValue;// characters holder
    double doubleValue;
    struct dataTypes dt;
};

int main() {
    union ascii n;
    // initialization of  a union member;
    union ascii *ptr;
    ptr->dataTypes.n = 12;
    n.intValue = 12;
    printf("The integer value is %d\n", n.intValue);// 12
    printf("The char Value is %c\n", n.charValue);
    printf("The float value is %.2f\n", n.floatValue);
    printf("The size is %zu bytes",sizeof(union ascii));// Printing the size of the union

    return 0;
}
