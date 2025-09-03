#include <stdio.h>
int main() {
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
	for(int i=0;i<length-1;i++) {
		int minIndex = i;
		for(int j = i+1;j<length;j++) {
			if(input_Numbers[minIndex] > input_Numbers[j]) {
			minIndex = j;	
			}
		}
		if(minIndex !=i) {
			int temp = input_Numbers[minIndex];
			input_Numbers[minIndex] = input_Numbers[i];
			input_Numbers[i] = temp;
			
		}
	}
	printf("The sorted array is:");
	 for(int p=0;p<length;p++) {
    	printf("%d",input_Numbers[p]);
    	if( p < length - 1) {
    		printf(" , ");
		}
	}
}