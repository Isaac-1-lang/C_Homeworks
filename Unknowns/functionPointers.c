#include <stdio.h>

int *factorials(int* ptr, int* z) {
    int c = *ptr + *z;
    return c;
}
int *arr(int* array,int size) {
	
}
int main() {
    int a = 12;
    int b = 34;
    float *result = factorials(&a, &b);
    printf("The memory address of c is: %p\n", result);
    printf("The value stored at the memory address is: %d\n", *result);
    int a1=12;
    int b1=34;
    int* z=&a1;
    *z=&b1;
    printf("%d\n",*z);
    
    
    return 0;
}
