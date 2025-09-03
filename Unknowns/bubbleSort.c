// Bubble sorting infinitely
#include <stdio.h>
int main() {
	// receiving the inputs from the user.
	int input_Numbers[5];
	// the length of an array
	int length = 5;
	printf("Enter five numbers:\n");
    for(int i=0;i<=4;i++) {
	scanf("%d",&input_Numbers[i]);
    }
    printf("The unsorted array is:");
    for(int p=0;p<length;p++) {
    	printf("%d",input_Numbers[p]);
    	if(p < length -1 ) {
    		printf(" , ");
		}
	}
	printf("\n");
    // bubble sort BETWEEN INPUTS
    for(int k=0;k<=length-1;k++) {
    	for(int m=0;m<=length-k-1;m++) {
    		if(input_Numbers[m] > input_Numbers[m+1]) {
    			int temp = input_Numbers[m];
    			input_Numbers[m] = input_Numbers[m + 1];
    			input_Numbers[m + 1] = temp;
			}
		}
	}
	printf("The sorted array is:");
	 for(int p=0;p<length;p++) {
    	printf("%d",input_Numbers[p]);
    	if( p < length - 1) {
    		printf(" , ");
		}
	}
	return 0;
}
