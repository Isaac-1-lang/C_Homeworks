#include <stdio.h>
int main() {
	int n=23234,m=0,p;
	while(n>0) {
		p= n/10;
		n=p;
		m++;
	}
	printf("%d",m);
	return 0;
}