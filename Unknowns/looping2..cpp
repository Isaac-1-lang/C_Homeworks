#include <stdio.h>
int main() {
	int number,index,product;
	printf("Enter a number\n");
	scanf("%d",&number);
	for(index=1;index<=12; index++) {
		product=number * index;
		printf("%d * %d = %d\n",number,index,product);
	}
	return 0;
}