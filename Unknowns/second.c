#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld() {
    printf("Hello World\n");
}
int allocateArray(int size) {
	int *arr=(int*)malloc(size*sizeof(int));
	if(arr==NULL) {
		printf("Memory allocated failed\n");
		return NULL;
	}
	return &arr;
}

int *Add(int *a, int *b) {
    int *c = (int *)malloc(sizeof(int));  // Dynamically allocate memory
    *c = (*a) + (*b);
    return c;
}

int main() {
    int a = 2, b = 4;
    int *ptr = Add(&a, &b);  // Call Add

    PrintHelloWorld();  // Call PrintHelloWorld
    printf("Sum = %d\n", *ptr);

    free(ptr);  // Free allocated memory
    int size=5;
    int *array= allocateArray(size);
    if(array !=NULL) {
    	for(int i=0;i<=size-1;i++) {
    		array[i] = i+1;
		}
		printf("Array elements: \n");
		for(int i=0;i<=size-1;i++) {
			printf("%d",array[i]);
		}
		free(array);
	}
    return 0;
}
