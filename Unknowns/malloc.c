#include <stdio.h>
#include <stdlib.h>

// Adding all element

int main() {
	int sum= 0,*ptr,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL) {
		printf("Error!! Memory not allocated");
		exit(0);
	} else {
		printf("Memory allocated successfully\n\n");
		printf("Enter the number of elements: \n");
	}
	for(int i=0;i<n;i++) {
		scanf("%d", ptr+i);
		printf("%d",*(ptr+i));
		sum+=*(ptr+i);
	}
	
	int *ptr1 = (int*)realloc(ptr,5);
	printf("The sum is %d",sum);
	return 0;
	
}