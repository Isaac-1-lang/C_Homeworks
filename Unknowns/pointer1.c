// Using pointers with user-defined functions
#include <stdio.h>


int n(int *num1,int *num2) {
	int sum = *num1+*num2;
	printf("The sum is :%d",sum);
}



int main() {
	int num1,num2;
	printf("Enter only two numbers:\n");
	scanf("%d %d",&num1,&num2);
	n(&num1,&num2);
	return 0;
}