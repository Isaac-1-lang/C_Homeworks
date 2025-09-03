#include <stdio.h>


enum week {
	Mon,
	Tue,
	Wed,
	Thurs,
	Fri
};



int main() {
   int day;
   printf("Enter the number of the day:");
   scanf("%d",&day);
   if(day<Mon || day>Fri) {
   	printf("Only numbers from 1-5 are allowed here...");
   }
   const char * days[] = {"Mon","Tues","Wed","Thurs","Fri"};
   printf("The %d of the week: %s",day,days[day-1]);
	return 0;
}