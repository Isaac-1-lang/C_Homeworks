int recursion(number) {
	if(number<=1) {
		return 1;
	} else {
		return number * recursion(number-1);
	}
}
int main() {
	int number;
	printf("The factorial is %p",*(recursion(number)));
	return 0;
}