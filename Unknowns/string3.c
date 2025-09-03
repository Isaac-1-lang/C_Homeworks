// strcmp is used to compare strings
#include <stdio.h>
int main() {
	 char str[]= "abana";
	 char name[]= "	abana";
	 int result= strcmp(str,name);
	 printf("%d",result);
	 // A program to print the larger string from the user input
	 char first[20],second[30];
	 printf("Enter two strings:\n");
	 fgets(second,sizeof(second),stdin);
	 //scanf("%s   %s",&first,&second);
	 printf("%s",second);
	 return 0;
}