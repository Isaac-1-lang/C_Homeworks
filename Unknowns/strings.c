#include <stdio.h>
// String functions
void main() {
	char firstName[]= "NIYOBYOSE";
	firstName[1]= 'A';
	printf("%s\n",firstName);
	char secondName[20]= "Isaac";
	//int n[20]= {2,3,4,5,6,7,8,90,120,11};
	//for(int i=0;i<=19;i++) {
	//	printf("%d\n",n[i]);
	//printf("%s", secondName);
	char names[50];
	printf("Enter your Names:");
	fgets(names,sizeof(names),stdin);
	printf("%s",names);
	
	}
