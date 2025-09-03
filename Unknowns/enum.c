#include <stdio.h>
#include <stdlib.h>

// This block is the enumeration definition for the days of the week.
enum week{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

enum trafficLight {
	Red,
	Green,
	Yellow
};

// They are globally defined enumerators and can be accessed anywhere in the code.
enum seasons {
	Spring,
	Summer,
	Winter,
	Autumn,
};
const char *weekDays[]= {

    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"

};
int main() {
    printf("They are at\nSunday:%d\n Thursday:%d\n positions.", Sunday, Thursday);
    
    enum trafficLight signal = Yellow;
    switch(signal) {
    	case Red:
        	printf("Stop plz!!!!!!\n\n");
    	break;
    	case Yellow:
    		printf("Red to Go!!!!!n\n");
    	break;
    	case Green:
    		printf("Reach there peacefully plz!!!!!!!\n\n");
	}
	int n;
	while (1){
		 int n;
		 printf("Enter number(1-7) and -1 to Exit:");
		 scanf("%d",&n);
		 if(n == -1) {
		 	printf("Exitting............");
		 	break;
		 } else if(n>=1 && n<=7) {
		 	printf("Today is %s.Good day!!!!!!!\n",weekDays[n]);
		 } else {
		 	printf("Enter a valid number\n");
		 }
	}
    
    
    return 0;
}
