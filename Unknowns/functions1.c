#include <stdio.h>
// Functions in C
void goodMorning() {
	printf("Good Morning\n");
}
int   squareNumber(int n) {
	int SquareNumbered= n*n;
	printf("%d\n",SquareNumbered);
}


int main() {
	goodMorning();
	int number;
	printf("Please enter a number for its square:");
	scanf("%d",&number);
	squareNumber(number);
	return 0;
}