//Sort an array using pointers.(Bubble sort using pointers);
// Bubble sorting infinitely
#include <stdio.h>
int main() {
	// receiving the inputs from the user.
	int input_Numbers[5];
	// the length of an array
	int length = 5;
	printf("Enter five numbers:\n");
    for(int i=0;i<length;i++) {
	scanf("%d",(input_Numbers+i));
    }
    // Displaying unsorted  array
    printf("The unsorted array is:");
    for(int p=0;p<length;p++) {
    	printf("%d",*(input_Numbers + p));
    	if(p < length -1 ) {
    		printf(" , ");
		}
	}
	printf("\n");
    // bubble sort BETWEEN INPUTS using pointers
    for(int k=0;k<=length-1;k++) {
    	for(int m=0;m<=length-k-1;m++) {
    		if(*(input_Numbers+m) > *(input_Numbers+m+1)) {
    			// Swapping using pointers
				int temp = *(input_Numbers+m);
    			*(input_Numbers+m) = *(input_Numbers+m+1);
    			*(input_Numbers+m+1) = temp;
			}
		}
	}
	printf("\n\n\n");
	printf("The sorted array is:");
	 for(int p=0;p<length;p++) {
    	printf("%d",*(input_Numbers+p));
    	if( p < length - 1) {
    		printf(" , ");
		}
	}
	printf("\n\n");
	
	return 0;
}
