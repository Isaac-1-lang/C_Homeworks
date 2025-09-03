#include <stdio.h>
int main() 
{
	int size=6;
	int i,j,k;
	for(i=0;i<=size;i++) {
		for(j=i; j<size; j++) {
			printf("  ");
		}
		printf("  ");
		for(k=0;k<=(2*i); k++) {
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}