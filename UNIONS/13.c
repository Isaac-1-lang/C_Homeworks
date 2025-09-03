#include <stdio.h>

union StudentInfo {
	int Age;
	char grade;
	double num;

};
int main() {
	printf("The size is %zu bytes",sizeof(union StudentInfo));
	return 0;
}