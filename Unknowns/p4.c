#include <stdio.h>
int increment(int *ptr) {
	ptr=(*ptr) + 1;// They are all kept in the stack and other global variables are kept in the global/static part.
}
int main() {
	int n=12;
	printf("Unmodified value: %d\n",n);
	int results = increment(&n);
	printf("Modified value:%d\n",results);
}