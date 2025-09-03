// Using structures


#include <stdio.h>
#include <stdlib.h>

struct person {
	int marks;
	int age;
	char grade;
};


int main() {
	int n;
	printf("Enter the number of students:");
	scanf("%d",&n);
	struct person *people = (struct person *)calloc(n,sizeof(struct person));
	for(int i=0;i<n;i++) {
		printf("\nEnter person's details:%d\n'");
		printf("Marks:");
		scanf("%d",&people[i].marks);
			printf("\n");
		printf("Grade:");
		scanf("%d",&people[i].grade);
			printf("\n");
			printf("Age:");
		scanf("%d",&people[i].age);
			printf("\n");
	}
	return 0;
}