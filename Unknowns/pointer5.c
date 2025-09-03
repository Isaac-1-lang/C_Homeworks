// Using memory allocation functions


#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
printf("Enter the number of elements: ");
scanf("%d",&n);

// Dynammically allocate memory for an array

int *arr=(int*)calloc(n,sizeof(int));


if(arr== NULL) {
	printf("Memory allocation failed!\n");
	return 1;
}

// Inputing numbers in the array based on input
printf("Enter %d elements:\n",n);
for(int i=0;i<n;i++) {
	scanf("%d",&arr[i]);
}
// Printing the elements
printf("Entrances are: ");
for(int i=0;i<n;i++) {
	printf("%d\t",arr[i]);
}
printf("\n");
// Free the memory to prevent leaking of the memory
// Let's crease the size of our array



int p;
printf("Enter the new_number of elements: ");
scanf("%d",&p);

// Dynammically allocate memory for an array

int *arr1=(int*)realloc(arr,sizeof(int));


if(arr1== NULL) {
	printf("Memory allocation failed!\n");
	return 1;
}

// Inputing numbers in the array based on input
printf("Enter %d elements:\n",p);
for(int i=0;i<p;i++) {
	scanf("%d",&arr1[i]);
}
// Printing the elements
printf("Entrances are: ");
for(int i=0;i<p;i++) {
	printf("%d\t",arr1[i]);
}
printf("\n");
free(arr);


return 0;
}