#include <stdio.h>
int main() {
	int number[10],largest,smallest,secondLargest,i;
	printf("Enter the numbers:");
	for(i=0; i<=9;i++) {
		scanf("%d",&number[i]);
	}
	secondLargest=largest=smallest=number[0];
	for(int j=0; j<=9;j++) {
		if(number[j]>=largest) {
			secondLargest= largest;
			largest=number[j];
		} else if(number[j] > secondLargest && number[j] !=largest) {
			secondLargest=number[j];
		if(number[j]>=smallest) {
			smallest=number[j];
		}
	}
	printf("The largest number is %d \n",largest);
	printf("The Second largest number is %d \n",secondLargest);
	printf("The smallest number is %d\n ",smallest);
	return 0;
	
}