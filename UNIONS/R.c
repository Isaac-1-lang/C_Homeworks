#include <stdio.h>

// Define a union to represent time in two ways
union Time {
    struct {
        int hours;
        int minutes;
        int seconds;
    } hms;
    int total_seconds;
};

int main() {
    union Time t;

    // Option 1: Represent time using hours, minutes, and seconds
    t.hms.hours = 2;
    t.hms.minutes = 30;
    t.hms.seconds = 15;

    printf("Time in (H:M:S) format: %02d:%02d:%02d\n", 
            t.hms.hours, t.hms.minutes, t.hms.seconds);

    // Option 2: Convert the same time to total seconds
    t.total_seconds = (t.hms.hours * 3600) + (t.hms.minutes * 60) + t.hms.seconds;
    
    printf("Total seconds: %d\n secs", t.total_seconds);

    return 0;
}
