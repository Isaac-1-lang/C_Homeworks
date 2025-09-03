// String functions for beginners
#include <stdio.h>
#include <string.h>
int main() {
	char language[]= "C programming";
	printf("%s\n",language);
	printf("The length of the above string is %d characters\n", strlen(language));
	printf("The size of the string is %zu bytes\n",sizeof(language));
	// strcpy is a function that is used to copy a string where we start by the destination array and the source comes after in order to prevent run-time errors.
	char food[]= "pizza";
	char bestFood[20];
	strcpy(bestFood,food);
	printf("Best food:%s\n", bestFood);
    // strcat is used to combine to or more strings;
	char text1[]= "His ";
	char text2[]= "Excellence ";
	char text3[]= "Paul ";
	char text4[]= "Kagame ";
	strcat(text1,text2);
	strcat(text3,text4);	
	printf("%s\n",text1 );
	printf("%s\n",text3 );
	strcat(text1,text3);
	printf("%s",text1);
	return 0;
	}