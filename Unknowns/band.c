#include <stdio.h>
int main() {
	int n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n; i++) {
		for(j=1;j<=i;j+=i) {
			int p= i + j;
			printf("%d",j);
			//if(p !=11) {
				printf("%d",i);
			//}
			
		}
		printf("\n");
	}
}