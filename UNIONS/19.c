#include <stdio.h>
#include <string.h>
union Student {
	char Name[12];
	int Age;
};

int main() {
	union Student st1;
	//union Student Name;
	st1.Age = 12;
	printf("The integer before overwrite: %d\n",st1.Age);
	
	strcpy(st1.Name, "NIYOBYOSE Isaac Precieux\n");
	printf("The name is: %s",st1.Name);
	
	
	//st1.Age = 12;
	printf("The integer after overwrite: %d\n",st1.Age);
	
	return 0;
}