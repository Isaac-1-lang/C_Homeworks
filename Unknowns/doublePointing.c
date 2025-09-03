#include <stdio.h>
#include <stdlib.h>
int main() {
	int n=12;
//	printf("%d\n",n);
	int *ptr = &n;
	int **ptr1 = &ptr;
    printf("%p\n",ptr);
    printf("%p\n\n",*ptr1);
	return 0;
}