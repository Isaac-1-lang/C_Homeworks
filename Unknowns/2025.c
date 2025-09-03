#include <stdio.h>
#include <stdlib.h>
struct Student {
	char Age[20];
	
	char Name[20];
	
	int  grades[5];
	
	char Id[12];
	
	
}NIYOBYOSE,Precieux,Isaac;
struct Time {
	int hours[2];
	int minutes[2];
	int seconds[2];
	
}time1,time2;

int main() {
	printf("%d\n",sizeof(int*));
    NIYOBYOSE.grades[0]  = 12;
    NIYOBYOSE.grades[1]  = 56;
    NIYOBYOSE.grades[2]  = 126;
    NIYOBYOSE.grades[3]  = 67;
    NIYOBYOSE.grades[4]  = 78;
    printf("The grades of NIYOBYOSE are\n");
	for(int i=0;i<5;i++) {
			printf("%d\t",NIYOBYOSE.grades[i]);
	}
	snprintf(NIYOBYOSE.Name,sizeof(NIYOBYOSE.Name),"NIYONGABA");
	printf("%s",NIYOBYOSE.Name);
	printf("\n\n\n\n");
	printf("The first time\n");
	printf("The hours:");
	scanf("%d",&time1.hours[0]);
	printf("The minutes:");
	scanf("%d",&time1.minutes[0]);
	printf("The seconds:");
	scanf("%d",&time1.seconds[0]);
	printf("The second time\n\n\n\n");
	printf("The hours:");
	scanf("%d",&time2.hours[1]);
	printf("The minutes:");
	scanf("%d",&time2.minutes[1]);
	printf("The seconds:");
	scanf("%d",&time2.seconds[1]);
	//Adding the times;
	int hr1 = time1.hours[0] + time2.hours[1];
	int seconds = time1.seconds[0] + time2.seconds[1];
	int minutes = time1.minutes[0] + time2.minutes[1];
	printf("The toal time is %d:%d:%d",hr1,minutes,seconds);
	
    

	return 0; 
	
}