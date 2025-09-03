#include <stdio.h>
#include <string.h>
int main() {
	printf("******Login******\n");
	while(1) {
		char name[20]= "NIYOBYOSE";
	char username[20];
	printf("Enter the username:");
	fgets(username,sizeof(username),stdin);
	size_t length = strlen(username);
	if(length>0 && username[length-1] == '\n') {
		username[length-1] = '\0';
	}
	if(strcmp(name,username) == 0) {
		printf("Successfully logged in\n");
		break;
	} else {
		printf("Incorrect username\n");
	}
	}
	
	// strcpy
	char Name[10] = "Isaac";
	char destin[15];
	strcpy(destin,Name);
	printf("%s\n",destin);
	
	// Strncpy
	char destin1[12];
	strncpy(destin1,Name,5);
	destin1[5] = '\0';	
	printf("%s\n",destin1);
	
	// strstr used to find A STRING in a given large collection.
	char Name2[20] = "I was on my way back home for a purpose I did not do much as quick";
	char *ptr = strstr(Name2,"I");
	printf("%s\n",ptr);
	// strtok exploding
	printf("*********Use of strtok\n\n\n********");
	char Name3[15] = "Isaac Precieux NIYOBYOSE ALOYS BYIRINGIRO";
	char *portion1 = strtok(Name3, " ");
	while(Name3 != NULL) {
		printf("%s\n",portion1);
		portion1 = strtok(NULL, " ");
	}
	return 0;
}	