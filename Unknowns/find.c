// find an element in an array using pointers

#include <stdio.h>
#include <stdlib.h>

int findIndex(int target,int *arr,int size) {
	for(int i=0;i<size;i++) {
		if(target == *(arr + i)) {
			return i;
		} 
	}
	return -1;// If not found
		
}
int main() {
	int array[10] = {790,1330,23342,215,3132,8000,312,878};
	int index;
	int number;
	printf("Enter a number:\n");
	scanf("%d",&number);
	index = findIndex(number,array,10);
	//findIndex(&number,index,array,10);
	if(index != -1) {
		printf("The number %d is found at index: %d\n",number,index);
    
} else {
	printf("The number %d is not found",number);
}
return 0;
}