#include <stdio.h>
#include <ctype.h>
void main() {
	int number = pow(10,2);
	printf("%d\n",number);
	char letter= 'a';
	char LETTER='A';
	printf("%c\n",toupper(letter));
	printf("%c\n",tolower(LETTER));
}