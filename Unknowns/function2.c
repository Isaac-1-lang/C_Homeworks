#include <stdio.h>
int main() {
	int n1,n2;
	printf("Sum of 2 numbers:\n");
	scanf("%d %d", &n1, &n2);
	int results=sumNumbers(n1,n2);
	printf("The sum of %d and %d is %d ", n1,n2,results);
	return 0;
} 


int sumNumbers(int n1, int n2) {
	int Addition= n1 + n2;
	return Addition;
}
 