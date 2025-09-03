#include <stdio.h>
void change_value(int *ptr);
int main() {
	int n=12;
	change_value(&n);
	printf("%d",n);
	return 0;
}

void change_value(int *ptr) {
	*ptr=45;
}

void change_value(int *ptr2) {
	*ptr2 = 101;
}