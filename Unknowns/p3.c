#include <stdio.h>
int main() {
	while(1) {
	int sum=0,bin1,bin2,po=1;
	int min,max,temp1,temp2,mid;
	int carry=0,i=0;
	printf("Add binary numbers:\n");
	printf("First binary:\n");
	scanf("%d",&bin1);
	printf("Second binary:\n");
	scanf("%d",&bin2);
	if(bin1>bin2) {
		max = bin1;
		min = bin2;
	} else {
		max = bin2;
		min = bin1;	
	}
	while(max>0 || carry > 0) {
		temp1= max%10;
		max /=10;
		temp2 = min %10;
		min/=10;
		mid = (temp1 + temp2 + carry) % 2;
		carry = (temp1 + temp2 + carry) /2;
		sum= po*mid +sum;
		po= po*10;
	}
	printf("Binary addition is:%d\n",sum);
	
}
return 0;
}