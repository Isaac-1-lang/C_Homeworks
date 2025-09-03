#include <stdio.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};
union Time {
	struct time hms;
	int total_seconds;
};

int main() {
	union Time times;
	times.hms.hours = 12;
	times.hms.minutes = 32;
	times.hms.seconds = 45;
	printf("Time format: %02d:%02d:%02d\n",times.hms.hours,times.hms.minutes,times.hms.seconds);
	times.total_seconds  = times.hms.hours*3600 + times.hms.minutes*60 + times.hms.seconds;
	printf("Total in seconds %d seconds",times.total_seconds);
	return 0;
}