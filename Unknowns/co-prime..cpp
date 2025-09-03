#include <stdio.h>
int main() {
	int n1,n2,n3,lv,gcd,i;
	printf("Enter the first number:\n");
	printf("Enter the second number:\n");
	printf("Enter the last number:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1 <= n2 && n1<=n3) {
		lv=n1;
	}
	else if(n2 <= n1 && n2<=n3) {
		lv=n2;
	}
	else {
		lv=n3;
	}
	gcd=lv;
	for(i=lv; i>=1; i--) {
		if(n1 % i==0 && n2 % i==0 && n3 % i==0) {
			gcd= i;
			printf("%d",gcd);
			break;
		}
	}
		
}