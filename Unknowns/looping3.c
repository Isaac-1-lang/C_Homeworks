#include <stdio.h>
int main() {
	int number[5];
	printf("Enter the 5 numbers:");
	for(int i=0;i<5; i++) {
		scanf("%d\n",number[i]);
	}
	for(int j=5;j>=1;j--) {
		printf("%d",number[j]);
	}
	return 0;
}