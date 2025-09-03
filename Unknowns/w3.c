// Inputing a string and print it.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100 // Declaring the maximum size of the string
int main() {
	char string[20]= " ";// intialize a string array to emptyness
	printf("Enter a string:");
	fgets(string,20,stdin);
	printf("%s\n",string);
	// finding the length of a string
	int counter = 0;
	printf("Enter a string:");
    fgets(string,20,stdin);
    while(string[counter] !='\0') {
    	counter++;
	}
//	SEPARATING THE CHARACTERS FROM A STRING
	for(int i=0;i<counter-1;i++) {
		printf("%c\n",string[i]);
	}
	// SEPARATE AND PRINT REVERSED.
		for(int i=counter-1;i>=0;i--) {
		printf("%c\n",string[i]);
	}
	printf("The length of your string is: %d",counter-1);
	// Writing a C program to find the num of strings
	char str[str_size];
	int i,wrd; // for iteration and count
	printf("\n\nCount the total number of word\n");
	printf("Input the string : ");
	fgets(str,sizeof str,stdin);
    i=0;
	wrd =1;
	while(str[i] !='\0') {
		if(str[i] != ' ' || str[i] =='\n' || str[i] == '\t') {
			wrd++;
		}
		i++;
	}
	printf("The number of words is %d",wrd-1-1);
	return 0;
}