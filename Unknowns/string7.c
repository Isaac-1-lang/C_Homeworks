#include <stdio.h>
int main() {
	int p[20];
	printf("Enter twenty numbers:");
	for(int f=0; f<20; f++) {
		scanf("%d",&p[f]);
	}
}
int length=20,minIndex,maxIndex;
for(i=0; i<length - 1; i++) {
	minIndex=i;
	for(x=i+1;x<lenght; x++) {
		if(p[x] < p[minIndex]) {
			minIndex= x;
		}
		
	}
	int temp= p[minIndex];
	p[minIndex] = p[i];
	p[i]= temp;
	for(i = 0; i< lenght; i++) {
		printf("%d\n",p[i]);
	} 
	return 0;
}