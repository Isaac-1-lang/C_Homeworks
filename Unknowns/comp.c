#include <stdio.h>
int main() {
	int n[10],m,o,p,q,r=-1,s=-1;
	printf("Enter number and compare:\n");
	for(m=0;m<=9;m++) {
		scanf("%d\n",&n[m]);
	}
	p=o=n[0];
	r=-1;
	for(q=0;q<=9;q++) {
		
		if(n[q]>=p) {
			r=p;
			p=n[q];
		}
		if(n[q]<=o) {
			s=o;
			o=n[q];
		}
		if(n[q] > r && n[q] !=p) {
			r=n[q];
		}
		if(n[q] < s && n[q] !=o) {
			s=n[q];
		}
	}
	printf("The largest number is:%d\n", p);
	printf("The smallest number is: %d\n",o);
	printf("The Second smallest number is: %d\n",s);
	printf("The Second largest number is: %d\n",r);
	return 0;
}